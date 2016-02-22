#include "Arqueiro.h"
#include "Inimigo.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using std::cout;
using std::cin;

Arqueiro::Arqueiro()
{
    this->nome = "";
    hp = 0;
    sp = 0;
    novasFlechas = 0;
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

void Arqueiro::setNome(string nome)
{
    this->nome = nome;
}
string Arqueiro::getNome()
{
    return nome;
}
void Arqueiro::setHp(int hp)
{
    this->hp = hp;
}
int Arqueiro::getHp()
{
    return hp;
}
void Arqueiro::setSp(int sp)
{
    this->sp = sp;
}
int Arqueiro::getSp()
{
    return sp;
}
void Arqueiro::setFlechas(int flechas)
{
	this->flechas = flechas;
}
int Arqueiro::getFlechas()
{
	return flechas;
}
void Arqueiro::atirar(int flechas, Inimigo &inimigo)
{
	int opcao;
	flechas -= 1;
	sp -=2;

    inimigo.diminuirHp();
	
	cout << "\nFlechas: " << flechas;
	cout << "\nSP: " << sp;
	
	cout << "\n\nHP do inimigo: " << inimigo.getHp();
	
	cout << "\n\nAtirar novamente? [1-Sim]  ";
	cin >> opcao;
	if (opcao == 1)
	{
		atirar(1, inimigo);
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
    //sleep(3);
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
void adicionarFlechas(const int &novasFlechas)
{
    if (flechas != 0)
    {
        int * aux = new int[flechasMax];
        
        for (int i = 0; i < flechasMax; i++)
            aux[i] = flechas[i];
            
        delete [] flechas;
            
        flechas = new int [ ++flechasMax ] ;
            
        for (int i = 0; i < flechasMax-1; i++)
                flechas[i] = aux [i];
    
        flechas[flechasMax-1] = novasFlechas;
        delete [] aux;
    }
    else
    {
        flechas = new int [ ++flechasMax];
        flechas[0] = flechasNovas;
    }
}

