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

void Hunter::atacarArmadilha()
{
	cout << " ARMADILHA DEPOSITADA.\n ";
	decArmadilha();
	diminuirSp();
	Sleep(2000);
	cout << "BUM!! \n\nO INIMIGO ESTA DERROTADO";
}
void Hunter::decArmadilha()
{
	armadilha--;
}
