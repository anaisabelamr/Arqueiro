#include "AtiradorDeElite.h"
#include "Arqueiro.h"
#include <iostream>
#include <windows.h>

using namespace std;
using std::cout;
using std::ostream;

AtiradorDeElite::AtiradorDeElite()
{
	this->flechas = 20;
}

AtiradorDeElite::~AtiradorDeElite()
{
}

AtiradorDeElite::AtiradorDeElite(const AtiradorDeElite &atirador)
:Arqueiro()
{
this -> flechas = atirador.flechas;
}

ostream &operator<<(ostream &output, AtiradorDeElite &atirador)
{
	output  << "NOME DO PERSONAGEM: " << atirador.getNome( ) << "\nHP: " << atirador.getHp() << "\nSP: " << atirador.getSp();
    output << "FLECHAS DISPONIVEIS: " << atirador.getFlechas();
    return output;
}

int AtiradorDeElite::getFlechas(){
    return this->flechas;
}

bool AtiradorDeElite::operator ==(const AtiradorDeElite &atirador) const
{
    if(atirador.flechas != this->flechas) return false;
    return true;
}

void AtiradorDeElite::decFlechas()
{
	cout << " \nATIRANDO EM 3...2...1\n ";
	flechas-=5;
}

void AtiradorDeElite::atirar(Inimigo *inimigo)
{
	while (flechas != 0)
	{
	cout << " TEMPESTADE DE FLECHAS.\n ";
	decFlechas();
	diminuirSp();
    Sleep(2000);
	}
    inimigo->inimigoMorto();
}
