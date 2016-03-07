#include "Arqueiro.h"
#include "Inimigo.h"
#include "Personagem.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include "Flechas.h"

using std::cout;
using std::cin;

const int spMax = 20;
const double hpMax = 50;

Arqueiro::Arqueiro()
{
    this->nome = "";
    hp = 0;
    sp = 0;
}
Arqueiro::Arqueiro(int hp, int sp, const string nome, Data &date)
{
    this->hp = hp;
    this->sp = sp;
    this->nome = nome;
	this->dataBatalha = date;
}    
Arqueiro::~Arqueiro()
{
    
}
ostream &operator<<(ostream &output, const Arqueiro &imprime)
{
    output << "NOME DO ARQUEIRO: " << imprime.nome << "\nHP: " << imprime.hp << "\nSP: " << imprime.sp;
    return output;
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
const void Arqueiro::dadosArqueiro()
{
	Arqueiro a;
    

}
void Arqueiro::atirar(Inimigo &inimigo)
{
	int opcao;
	cout << "ARQUEIRO, DESEJA ATIRAR? [1-Sim] ";
	cin >> opcao;
	switch(opcao)
	{
		case 1:
			flechas.escolherFlecha();
		default:
			cout << "Tente novamente.";
	}
	

	cout << "\nSP: " << sp;
	
	//cout << "\n\nHP do inimigo: " << inimigo.getHp();
	
	cout << "\n\nAtirar novamente? [1-Sim]  ";
	cin >> opcao;
	if (opcao == 1)
	{
		flechas.escolherFlecha();
	}

	if ((sp == 0) || (hp == 0))
	{
//		furtividade();
	}
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



