#include "Arqueiro.h"
#include "Inimigo.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

Inimigo::Inimigo()
{
	this->nome = "";
    hp = 0;
}
Inimigo::Inimigo(int hp, const string nome)
{
    this->hp = hp;
    this->nome = nome;
}    

Inimigo::~Inimigo()
{
}
void Inimigo::setNome(string nome)
{
    this->nome = nome;
}
string Inimigo::getNome()
{
    return nome;
}
void Inimigo::setHp(int hp)
{
    this->hp = hp;
}
int Inimigo::getHp()
{
    return hp;
}

void Inimigo::diminuirHp()
{
    hp = 0.2 * hp;
}

