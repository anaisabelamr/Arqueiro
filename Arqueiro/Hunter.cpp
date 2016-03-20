#include "Hunter.h"
#include "Arqueiro.h"
#include <iostream>
#include <windows.h>

using namespace std;
using std::cout;
using std::ostream;

Hunter::Hunter()
{
	this->armadilha = armadilha;

}
Hunter::Hunter(const Hunter &hunter)
:Arqueiro(static_cast <Arqueiro> (hunter))
{
this -> armadilha = hunter.armadilha;
}
Hunter::~Hunter()
{
}
ostream &operator<<(ostream &output, const Hunter &hunter)
{
	output << static_cast <Arqueiro> (hunter);
    output << "ARMADILHAS DISPONIVEIS: " << hunter.armadilha;
    return output;
}
bool Hunter::operator ==(const Hunter &hunter) const
{
    if(hunter.armadilha != armadilha) return false;
    return true;
}
virtual void Hunter::dados(Hunter &hunter)
{
	cout << "\n\nNome: " << hunter.nome << "Helena Wayne";
	cout << "\nHP: " << hunter.hp;
	cout << "\nSP: " << hunter.sp;
	cout << "Total de armadilhas: " << hunter.armadilha;
}

void Hunter::decArmadilha()
{
	armadilha--;
}
virtual void Hunter::atirar()
{
	cout << " ARMADILHA DEPOSITADA.\n ";
	decArmadilha();
	diminuirSp();
	Sleep(2000);
	cout << "BUM!! \n\nO INIMIGO ESTA DERROTADO";
}