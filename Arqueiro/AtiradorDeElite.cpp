#include "AtiradorDeElite.h"
#include "Arqueiro.h"
#include <iostream>
#include <windows.h>

using namespace std;
using std::cout;
using std::ostream;

AtiradorDeElite::AtiradorDeElite()
{
	this->bala = 5;
}

AtiradorDeElite::~AtiradorDeElite()
{
}

AtiradorDeElite::AtiradorDeElite(const AtiradorDeElite &atirador)
:Arqueiro()
{
this -> bala = atirador.bala;
}

ostream &operator<<(ostream &output, AtiradorDeElite &atirador)
{
	output  << "NOME DO PERSONAGEM: " << atirador.getNome( ) << "\nHP: " << atirador.getHp() << "\nSP: " << atirador.getSp();
    output << "BALAS DISPONIVEIS: " << atirador.getBala();
    return output;
}

int AtiradorDeElite::getBala(){
    return this->bala;
}

bool AtiradorDeElite::operator ==(const AtiradorDeElite &atirador) const
{
    if(atirador.bala != this->bala) return false;
    return true;
}

void AtiradorDeElite::decBala()
{
	bala--;
}

void AtiradorDeElite::atirar(Inimigo *inimigo)
{
	while (bala != 0)
	{
	cout << " ATIRANDO.\n ";
	decBala();
	diminuirSp();
    Sleep(2000);
	}
    inimigo->inimigoMorto();
}
