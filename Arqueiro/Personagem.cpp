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
Personagem::Personagem(const Personagem &personagem)
{
	this->nome = personagem.nome;
    this->hp = personagem.hp;
    this->sp = personagem.sp;
	this->bemSucedida = personagem.bemSucedida;
}
Personagem::~Personagem()
{
}
ostream &operator<<(ostream &output, const Personagem &imprime)
{
    output << "NOME DO PERSONAGEM: " << imprime.nome << "\nHP: " << imprime.hp << "\nSP: " << imprime.sp;
    return output;
}
void Personagem::dados(Personagem &p)
{
    cout << "Nome do personagem: " << p.nome;
    cout << "HP: " << p.hp;
    cout << "SP: " << p.sp;
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
virtual void Personagem::diminuirHp()
{
    hp -= 0.2 * hp;
}
virtual bool Personagem::defesa(bool bemSucedida)
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
virtual void Personagem::diminuirSp()
{
	sp -= 2;
}
virtual void Personagem::furtividade()
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
