#include "AtiradorDeElite.h"
#include "Arqueiro.h"
#include <iostream>
#include <windows.h>

using namespace std;
using std::cout;
using std::ostream;

AtiradorDeElite::AtiradorDeElite()
{
	this->bala = bala;
}

AtiradorDeElite::~AtiradorDeElite()
{
}

AtiradorDeElite::AtiradorDeElite(const AtiradorDeElite &atirador)
:Arqueiro(static_cast <Arqueiro> (atirador))
{
this -> bala = atirador.bala;
}

ostream &operator<<(ostream &output, const AtiradorDeElite &atirador)
{
	output << static_cast <Arqueiro> (atirador);
    output << "BALAS DISPONIVEIS: " << atirador.bala;
    return output;
}
bool Hunter::operator ==(const AtiradorDeElite &atirador) const
{
    if(atirador.bala != bala) return false;
    return true;
}
virtual void AtiradorDeElite::dados(AtiradorDeElite &atirador)
{
	cout << "\n\nNome: " << atirador.nome << "Deadshot";
	cout << "\nHP: " << atirador.hp;
	cout << "\nSP: " << atirador.sp;
	cout << "Total de balas: " << atirador.bala;
}

void AtiradorDeElite::decBala()
{
	bala--;
}
virtual void Hunter::atirar()
{
	while (bala != 0)
	{
	cout << " ATIRANDO.\n ";
	decBala();
	diminuirSp();
	Sleep(2000);
	}
}
