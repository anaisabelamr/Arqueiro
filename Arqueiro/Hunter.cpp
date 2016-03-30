#include "Hunter.h"
#include "Arqueiro.h"
#include <iostream>
#include <windows.h>

using namespace std;
using std::cout;
using std::ostream;

Hunter::Hunter()
{
	this->armadilha = 10;
}

Hunter::Hunter(const Hunter &hunter)
:Arqueiro()
{
this -> armadilha = hunter.armadilha;
}

Hunter::~Hunter()
{
}

ostream &operator<<(ostream &output, Hunter &hunter)
{
	output  << "NOME DO PERSONAGEM: " << hunter.getNome() << "\nHP: " << hunter.getHp() << "\nSP: " << hunter.getSp();
    output << "ARMADILHAS DISPONIVEIS: " << hunter.getArmadilha();
    return output;
}

int Hunter::getArmadilha(){
    return this->armadilha;
}

bool Hunter::operator ==(const Hunter &hunter) const
{
    if(hunter.armadilha != armadilha) return false;
    return true;
}

void Hunter::decArmadilha()
{
	armadilha--;
}
void Hunter::atirar(Inimigo *inimigo)
{
	cout << " ARMADILHA DEPOSITADA.\n ";
	decArmadilha();
	diminuirSp();
	Sleep(2000);
    inimigo->inimigoMorto();
}