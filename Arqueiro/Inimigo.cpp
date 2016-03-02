#include "Arqueiro.h"
#include "Inimigo.h"
#include "Flechas.h"
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
void Inimigo::inimigoMorto()
{
	hp = 0;
	cout << "\n\nInimigo esta derrotado. Parabens, arqueiro!";
}

