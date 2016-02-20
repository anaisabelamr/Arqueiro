#include <iostream>
#include <string.h>
#include "Arqueiro.h"
#include "Data.h"

const static int hpMax = 50;
const static int spMax = 20;
const static int flechasMax = 20;


using namespace std;

int main()
{
    Arqueiro a;
        
    a.setNome("Oliver Queen");
	a.setHp(hpMax);
	a.setSp(spMax);
	a.setFlechas(flechasMax);
        
    cout << "Nome do Arqueiro: " << a.getNome() << endl;
    cout << "HP: " << a.getHp() << "\nSP: " << a.getSp() << "\nTotal de Flechas: "<< a.getFlechas() ;"\n\n";
	
	int opcao;
	
	cout << "Deseja atirar? [1-Sim]  ";
	cin >> opcao;
	if (opcao == 1)
	{
		Arqueiro::atirar(int );
	}
	else
	{
		system("PAUSE");
	}

    
	return 0;
}
