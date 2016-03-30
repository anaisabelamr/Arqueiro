#include "Arqueiro.h"
#include "Inimigo.h"
#include "Personagem.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include "Flechas.h"

using std::ostream;
using std::cout;
using std::cin;

const int spMax = 20;
const double hpMax = 50;

Arqueiro::Arqueiro()
{
    dataBatalha = Data(13,11,1995);
}

Arqueiro::Arqueiro(const Arqueiro &arqueiro)
:Personagem(arqueiro.nome,arqueiro.hp,arqueiro.sp,arqueiro.bemSucedida)
{
	this -> dataBatalha = arqueiro.dataBatalha;
	this -> flechas = arqueiro.flechas;
}
Arqueiro::~Arqueiro()
{
    
}
ostream &operator<<(ostream &output, Arqueiro &arqueiro)
{
	output  << "NOME DO PERSONAGEM: " << arqueiro.getNome() << "\nHP: " << arqueiro.getHp() << "\nSP: " << arqueiro.getSp();
}
bool Arqueiro::operator ==(const Arqueiro &comparaArqueiro) const
{
    if(comparaArqueiro.nome != nome) return false;
    if(comparaArqueiro.hp != hp) return false;
    if(comparaArqueiro.sp != sp) return false;
    return true;
}
const Arqueiro & Arqueiro::operator =(const Arqueiro &atributo)
{
    nome = atributo.nome;
    hp = atributo.hp;
    sp = atributo.sp;
}
const void Arqueiro::dados(Arqueiro &arqueiro, Flechas &flechas)
{
	cout << "\n\nNome: " << arqueiro.nome << "Oliver Queen";
	cout << "\nHP: " << arqueiro.hp;
	cout << "\nSP: " << arqueiro.sp;
	cout << "\nTotal de flechas:\nComum: " << flechas.getNumeroFlechasComum() << "\nFogo: " << flechas.getNumeroFlechasFogo() << "\nExplosiva: " << flechas.getNumeroFlechasExplosiva() << "\nEnvenenada: " << flechas.getNumeroFlechasEnvenenada();

}

void adicionarFlechas(Flechas flechas, const int &novasFlechas)
{
    /*if (flechas.getNumeroFlechas() != 0)
    {
        int * aux = new int[flechas.getNumeroFlechas()];
        
        for (int i = 0; i < flechas.getNumeroFlechas(); i++)
            aux[i] = flechas[i];
            
        delete [] flechas;
		
		flechas.addNumFlechas(novasFlechas);
            
        flechas = new int [ flechas.getNumeroFlechas()] ;
            
        for (int i = 0; i < nFlechas-1; i++)
                flechas[i] = aux [i];
    
        flechas[nFlechas-1] = novasFlechas;
        delete [] aux;
    }
    else
    {
        flechas = new int [ ++nFlechas];
        flechas[0] = novasFlechas;
    }*/
	
	flechas.addNumFlechas(novasFlechas);
}

void Arqueiro::diminuirHp()
{
    hp -= 0.2 * hp;
}

bool Arqueiro::defesa(bool bemSucedida)
{
	if (bemSucedida == false)
	{
		hp -= 0.2*hp;
		cout << "\n\nDefesa mal sucedida\nHP: " << hp;
		return false;
	}
	else
	{
		cout << "\n\nDefesa bem sucedida.\n\n";
		return true;
	}
}

void Arqueiro::diminuirSp()
{
	sp -= 2;
}

void Arqueiro::furtividade()
{
    do
	{
	cout <<"\n\nMODO FURTIVO\nDados do personagem";
    cout << "\nHP: " << hp;
    cout << "\nSP " << sp;
    hp+=10;
    sp+=4;
    Sleep(3000);
    }
	while ((sp <= spMax) && (hp <= hpMax));
}




