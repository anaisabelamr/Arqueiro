#include "Arqueiro.h"
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
int Arqueiro::atirar(int flechas)
{
	int opcao;
	Arqueiro::flechas -= 1;
	Arqueiro::sp -=4;
	cout << "Flechas: " << Arqueiro::flechas;
	cout << "\nSP: " << Arqueiro::sp;
	cout << "\nAtirar novamente? [1-Sim]  ";
	cin >> opcao;
	if (opcao == 1)
	{
		atirar(1);
	}
	else
	{
		cin;
	}
	if ((Arqueiro::sp == 0) || (Arqueiro::hp == 0))
	{
		furtividade();
	}
}
int furtividade()
{
    do
    {
		cout <<"MODO FURTIVO\nDados do arqueiro\nHP: " << Arqueiro::hp "\nSP:" << Arqueiro::sp;
		Arqueiro::hp+=10;
		Arqueiro::sp+=4;
		sleep(3);
		int opcao2;
		cout << "\nAtacar novamente? [1-Sim]";
		cin >> opcao2;
		if (opcao2 == 1)
		{
			a.atirar(1);
		}
		else
		{
			cout << "Tente novamente.";
		}
	   
		}
		while ((Arqueiro::hp < Arqueiro::hpMax) && (Arqueiro::sp < Arqueiro::spMax));
}

