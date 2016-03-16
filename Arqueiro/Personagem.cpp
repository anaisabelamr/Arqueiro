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

