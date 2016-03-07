#include "Personagem.h"
#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using std::cout;
using std::cin;


Personagem::Personagem()
{
}
Personagem::Personagem(string nome, int hp, int sp, bool bemSucedida)
{
	this->nome = nome;
    this->hp = hp;
    this->sp = sp;
	this->bemSucedida = bemSucedida;
}
Personagem::~Personagem()
{
}
void Personagem::setNome(string nome)
{
    this->nome = nome;
}
string Personagem::getNome()
{
    return nome;
}
void Personagem::setHp(int hp)
{
    this->hp = hp;
}
int Personagem::getHp()
{
    return hp;
}

void Personagem::diminuirHp()
{
    hp = 0.2 * hp;
}
bool Personagem::defesa(bool bemSucedida)
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
void Personagem::diminuirSp()
{
	sp -= 2;
}
void Personagem::furtividade()
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
