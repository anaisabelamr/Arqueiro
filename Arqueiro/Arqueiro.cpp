#include "Arqueiro.h"
#include "Inimigo.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include "Flechas.h"

using std::cout;
using std::cin;

Arqueiro::Arqueiro()
{
    this->nome = "";
    hp = 0;
    sp = 0;
 //   novasFlechas = 0;
}
Arqueiro::Arqueiro(int hp, int sp, const string nome)
{
    this->hp = hp;
    this->sp = sp;
    this->nome = nome;
}    

Arqueiro::~Arqueiro()
{
    
}
ostream &operator<<(ostream &output, const Arqueiro &imprime)
{
    output << "NOME DO ARQUEIRO: " << imprime.nome << "\nHP: " << imprime.hp << "\nSP: " << imprime.sp;
    return output;
}
bool Arqueiro::operator ==(const Arqueiro &comparaArqueiro) const
{
    if(comparaArqueiro.nome != nome) return false;
    if(comparaArqueiro.hp != hp) return false;
    if(comparaArqueiro.sp != sp) return false;
    return true;
}
const Arqueiro & Arqueiro::operator =(const Arqueiro &atributo)
{
    nome = atributo.nome;
    hp = atributo.hp;
    sp = atributo.sp;
}
void Arqueiro::setNome(string nome)
{
    this->nome = nome;
}
string Arqueiro::getNome()
{
    return this->nome;
}
void Arqueiro::setHp(int hp)
{
    this->hp = hp;
}
int Arqueiro::getHp()
{
    return this->hp;
}
void Arqueiro::setSp(int sp)
{
    this->sp = sp;
}
int Arqueiro::getSp()
{
    return this->sp;
}
void Arqueiro::dataBatalha(Data &data)
{
    data.dataBatalha(data.getDia(), data.getMes(), data.getAno());
}

void Arqueiro::atirar(Flechas &flechas, Inimigo &inimigo)
{
	int opcao;
	cout << "Deseja atirar? [1-Sim] ";
	cin >> opcao;
	switch(opcao)
	{
		case 1:
			flechas.escolherFlecha();
		default:
			cout << "Tente novamente.";
	}
	diminuirSp();

	cout << "\nSP: " << sp;
	
	cout << "\n\nHP do inimigo: " << inimigo.getHp();
	
	cout << "\n\nAtirar novamente? [1-Sim]  ";
	cin >> opcao;
	if (opcao == 1)
	{
		flechas.escolherFlecha();
	}

	if ((sp == 0) || (hp == 0))
	{
		furtividade();
	}
}
void Arqueiro::furtividade()
{
    cout <<"\n\nMODO FURTIVO\nDados do arqueiro";
    cout << "\nHP: " << hp;
    cout << "\nSP " << sp;
    hp+=10;
    sp+=4;
    Sleep(3000);
    while ((sp <= spMax) && (hp <= hpMax))
    {
        furtividade();
    };

}
bool Arqueiro::defesa(bool bemSucedida)
{
	if (bemSucedida == false)
	{
		hp -= 0.2*hp;
		cout << "\n\nDefesa mal sucedida\nHP: " << hp;
		return false;
	}
	else
	{
		cout << "\n\nDefesa bem sucedida.\n\n";
		return true;
	}
}
void Arqueiro::diminuirSp()
{
	sp -= 2;
}
/*void adicionarFlechas(const int &novasFlechas)
{
    if (flechas != 0)
    {
        int * aux = new int[nFlechas];
        
        for (int i = 0; i < nFlechas; i++)
            aux[i] = flechas[i];
            
        delete [] flechas;
            
        flechas = new int [ ++nFlechas ] ;
            
        for (int i = 0; i < nFlechas-1; i++)
                flechas[i] = aux [i];
    
        flechas[nFlechas-1] = novasFlechas;
        delete [] aux;
    }
    else
    {
        flechas = new int [ ++nFlechas];
        flechas[0] = flechasNovas;
    }
}
*/


