#include <iostream>
#include <string.h>
#include "Inimigo.h"
#include "Arqueiro.h"
#include "Flechas.h"
#include "Data.h"
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

//refazer o main

using namespace std;

int main()
{
    Arqueiro arq;
	Inimigo i;
	Data d(15,6,2015);
	Flechas f;
    
	arq.setNome("Oliver Queen\n");
	arq.setHp(Arqueiro::hpMax);
	arq.setSp(Arqueiro::spMax);
	
	i.setNome("Malcom Merlin\n");
	i.setHp(Arqueiro::hpMax);

	d.imprimirData();

	arq.dadosArqueiro();

	cout << "\n\nInimigo: " << i.getNome() << endl;
	cout << "\nHP: " << i.getHp() << endl;
	
	int opcao;
	cout << "\n\nDeseja atirar? [1-Sim]  ";
	cin >> opcao;
	if (opcao == 1)
	{
		arq.atirar(f,i);
	}


		arq.defesa(false);

	do 
	{
		arq.furtividade();
	}
	while ((arq.getSp() <= Arqueiro::spMax) || (arq.getHp() <= Arqueiro::hpMax));
	
	arq.defesa(true);
    
	return 0;
}
