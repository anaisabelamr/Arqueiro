#include "Hunter.h"
#include "Arqueiro.h"
#include <iostream>
#include <windows.h>


Hunter::Hunter()
{
}

Hunter::~Hunter()
{
}
void Hunter::atacarArmadilha()
{
	cout << " ARMADILHA DEPOSITADA.\n ";
	armadilha--;
	diminuirSp();
	Sleep(2000);
	cout << "BUM!! \n\nO INIMIGO ESTA DERROTADO";
}

