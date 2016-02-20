#include <iostream>
#include <string.h>
#include "Arqueiro.h"
#include "Data.h"
#include <stdlib.h>
#include <stdio.h>

const static double hpMax = 50.0;
const static int spMax = 20;
const static int flechasMax = 20;

using namespace std;

int main()
{
    Arqueiro a;
	Data d;
        
    a.setNome("Oliver Queen\n");
	
	a.setHp(hpMax);
	a.setSp(spMax);
	a.setFlechas(flechasMax);
        
    cout << "Nome do Arqueiro: " << a.getNome() << endl;
	d.dataBatalha();
    cout << "\n\nHP: " << a.getHp() << "\nSP: " << a.getSp() << "\nTotal de Flechas: "<< a.getFlechas() ;
	
	int opcao;
	
	cout << "\n\nDeseja atirar? [1-Sim]  ";
	cin >> opcao;
	if (opcao == 1)
	{
		a.atirar(1);

		
	}
	else
	{
		cin;
	}

		a.defesa(false);

	do 
	{
		a.furtividade();
	}
	while ((a.sp <= spMax) || (a.hp <= hpMax));
    
	return 0;
}
