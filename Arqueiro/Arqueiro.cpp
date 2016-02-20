#include "Arqueiro.h"
#include <string>
#include <iostream>

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
int Arqueiro::atirar(int )
{
	int opcao;
	Arqueiro::flechas -= 1;
	cout << "Atirar novamente? [1-Sim]  ";
	cin >> opcao;
	if (opcao == 1)
	{
		atirar();
	}
	else
	{
		system("PAUSE");
	}
}

