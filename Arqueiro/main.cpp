#include <iostream>
#include <string.h>
#include "Inimigo.h"
#include "Arqueiro.h"
#include "Flechas.h"
#include "Data.h"
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

const static double hpMax = 50.0;
const static int spMax = 20;

using namespace std;

int main()
{
    Arqueiro a;
	Inimigo i;
	Data d();
	Flechas f;
        
    a.setNome("Oliver Queen\n");
	a.setHp(hpMax);
	a.setSp(spMax);
	
	i.setNome("Malcom Merlin\n");
	i.setHp(hpMax);
        
    cout << "Nome do Arqueiro: " << a.getNome() << endl;
    
//	d.dataBatalha();
    
    cout << "\n\nHP: " << a.getHp() << "\nSP: " << a.getSp();
	
	cout << "\n\nInimigo: " << i.getNome() << endl;
	cout << "\nHP: " << i.getHp() << endl;
	
	int opcao;
	cout << "\n\nDeseja atirar? [1-Sim]  ";
	cin >> opcao;
	if (opcao == 1)
	{
		a.atirar(f,i);
	}


		a.defesa(false);

	do 
	{
		a.furtividade();
	}
	while ((a.getSp() <= spMax) || (a.getHp() <= hpMax));
	
	a.defesa(true);
    
	return 0;
}
