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
void Arqueiro::atirar(int flechas)
{
	int opcao;
	Arqueiro::flechas -= 1;
	Arqueiro::sp -=2;
	Inimigo::hp -= 0.2*Inimigo::hp;
	
	cout << "\nFlechas: " << Arqueiro::flechas;
	cout << "\nSP: " << Arqueiro::sp;
	
	cout << "\n\nHP do inimigo: " << Inimigo::hp;
	
	cout << "\n\nAtirar novamente? [1-Sim]  ";
	cin >> opcao;
	if (opcao == 1)
	{
		atirar(1);
	}

	if ((Arqueiro::sp == 0) || (Arqueiro::hp == 0))
	{
		furtividade();
	}
}
void Arqueiro::furtividade()
{
	
		cout <<"\n\nMODO FURTIVO\nDados do arqueiro";
		cout << "\nHP: " << Arqueiro::hp;
		cout << "\nSP " << Arqueiro::sp;
		Arqueiro::hp+=10;
		Arqueiro::sp+=4;
		//sleep(3);
		while ((Arqueiro::sp <= Arqueiro::spMax) && (Arqueiro::hp <= Arqueiro::hpMax))
		{
			furtividade();
		};

}
bool Arqueiro::defesa(bool bemSucedida)
{
	if (bemSucedida == false)
	{
		Arqueiro::hp -=0.2*Arqueiro::hp;
		cout << "\n\nDefesa mal sucedida\nHP: " << Arqueiro::hp;
		return false;
	}
	else
	{
		cout << "\n\nDefesa bem sucedida.\n\n";
		return true;
	}
}

