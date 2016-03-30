#include "Espadachim.h"
#include "Personagem.h"
#include <iostream>
#include <windows.h>

using namespace std;

Espadachim::Espadachim():
Personagem("titi",5000000000,20000000,false)
{
	this -> espada = 1;
}
Espadachim::~Espadachim()
{
}
Espadachim::Espadachim(const Espadachim &espadachim)
:Personagem(espadachim.nome,espadachim.hp,espadachim.sp,espadachim.bemSucedida)
{
	this -> espada = espadachim.espada;
}
ostream &operator<<(ostream &output, Espadachim &espadachim)
{
	output << "NOME DO PERSONAGEM: " << espadachim.getNome() << "\nHP: " << espadachim.getHp() << "\nSP: " << espadachim.getSp();
    return output;
}

bool Espadachim::operator ==(const Espadachim &espadachim) const
{
    if(espadachim.espada != espada) return false;
    return true;
}

void Espadachim::diminuirHp()
{
	this->hp-= 0.5*this->hp;
}

void Espadachim::diminuirSp()
{
	this->sp -= 3;
}

void Espadachim::furtividade()
{
    do
	{
	cout << "\n\nMODO FURTIVO\nDados do personagem";
    cout << "\nHP: " << hp;
    cout << "\nSP " << sp;
    hp+=5;
    sp+=3;
    Sleep(3000);
    }
	while ((sp <= spMax) && (hp <= hpMax));
}

bool Espadachim::defesa(bool)
{
	if (bemSucedida == false)
	{
		hp -= 0.5*hp;
		cout << "\n\nDefesa mal sucedida\nHP: " << hp;
		return false;
	}
	else
	{
		cout << "\n\nDefesa bem sucedida.\n\n";
		return true;
	}
}

