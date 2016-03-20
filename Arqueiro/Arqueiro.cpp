#include "Arqueiro.h"
#include "Inimigo.h"
#include "Personagem.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include "Flechas.h"

using std::ostream;
using std::cout;
using std::cin;

const int spMax = 20;
const double hpMax = 50;

Arqueiro::Arqueiro()
{
    dataBatalha = 0;
}

Arqueiro::Arqueiro(const Arqueiro &arqueiro)
:Personagem(static_cast <Personagem> (arqueiro))
{
	this -> dataBatalha = arqueiro.dataBatalha;
	this -> flechas = arqueiro.flechas;
}
Arqueiro::~Arqueiro()
{
    
}
ostream &operator<<(ostream &output, Arqueiro &arqueiro)
{
	output << static_cast <Personagem> (arqueiro);
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
const void Arqueiro::dados(Arqueiro &arqueiro, Flechas &flechas)
{
	cout << "\n\nNome: " << arqueiro.nome << "Oliver Queen";
	cout << "\nHP: " << arqueiro.hp;
	cout << "\nSP: " << arqueiro.sp;
	cout << "\nTotal de flechas:\nComum: " << flechas.flechaComum << "\nFogo: " << flechas.flechaFogo "\nExplosiva: " << flechas.flechaExplosiva << "\nEnvenenada: " << flechas.flechaEnvenenada;

}

void Arqueiro::atirar(Inimigo &inimigo)
{
	int opcao;
	cout << "ARQUEIRO, DESEJA ATIRAR? [1-Sim] ";
	cin >> opcao;
	switch(opcao)
	{
		case 1:
			flechas.escolherFlecha();
		default:
			cout << "\n\nTente novamente.";
	}
	cout << "\nSP: " << sp;
	
	atirar(inimigo);

	if ((sp == 0) || (hp == 0))
	{
//		furtividade();
	}
}
void adicionarFlechas(Flechas flechas, const int &novasFlechas)
{
    /*if (flechas.getNumeroFlechas() != 0)
    {
        int * aux = new int[flechas.getNumeroFlechas()];
        
        for (int i = 0; i < flechas.getNumeroFlechas(); i++)
            aux[i] = flechas[i];
            
        delete [] flechas;
		
		flechas.addNumFlechas(novasFlechas);
            
        flechas = new int [ flechas.getNumeroFlechas()] ;
            
        for (int i = 0; i < nFlechas-1; i++)
                flechas[i] = aux [i];
    
        flechas[nFlechas-1] = novasFlechas;
        delete [] aux;
    }
    else
    {
        flechas = new int [ ++nFlechas];
        flechas[0] = novasFlechas;
    }*/
	
	flechas.addNumFlechas(novasFlechas);
}
virtual void Arqueiro::diminuirHp()
{
    hp -= 0.2 * hp;
}
virtual bool Arqueiro::defesa(bool bemSucedida)
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
virtual void Arqueiro::diminuirSp()
{
	sp -= 2;
}
virtual void Arqueiro::furtividade()
{
    do
	{
	cout <<"\n\nMODO FURTIVO\nDados do personagem";
    cout << "\nHP: " << hp;
    cout << "\nSP " << sp;
    hp+=10;
    sp+=4;
    Sleep(3000);
    }
	while ((sp <= spMax) && (hp <= hpMax));
}




