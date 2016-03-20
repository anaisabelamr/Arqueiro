#include "Espadachim.h"
#inclide "Personagem.h"

using std::ostream;
using std::string;

Espadachim::Espadachim()
{
	this -> espada = espadachim.espada;
}
Espadachim::~Espadachim()
{
}
Espadachim::Espadachim(const Espadachim &espadachim)
:Personagem(static_cast <Personagem> (espadachim))
{
	this -> espada = espadachim.espada;
}
ostream &operator<<(ostream &output, Espadachim &espadachim)
{
	output << static_cast <Personagem> (espadachim);
}
bool Espadachim::operator ==(const Espadachim &espadachim) const
{
    if(espadachim.espada != espada) return false;
    return true;
}
virtual void diminuirHp()
{
	hp -= 0.5*hp;
}
virtual void diminuirSp()
{
	sp -= 3;
}
virtual void furtividade()
{
    do
	{
	cout <<"\n\nMODO FURTIVO\nDados do personagem";
    cout << "\nHP: " << hp;
    cout << "\nSP " << sp;
    hp+=5;
    sp+=3;
    Sleep(3000);
    }
	while ((sp <= spMax) && (hp <= hpMax));
}
virtual bool defesa(bool)
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

