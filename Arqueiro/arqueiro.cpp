#include "Arqueiro.h"
#include <string>
#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;
using std::cout;
using std::cout;

arqueiro::arqueiro()
{
    nome = "";
}

void arqueiro::setNome(string nome)
{
    this->nome = nome;
}

string arqueiro::getNome()
{
    return this->nome;
}

arqueiro::atacar(int opcao)
{
    cout << "Digite o numero correspondente ao ataque desejado:\n1-Ataque Simples\n2-Rajada de Flechas\n3-Chuva de Flechas";
    cin >> opcao;
    switch(opcao)
    {
      case 1:
        arqueiro::ataqueSimples();
        break;
      case 2:    
        arqueiro::rajadaDeFlechas();
        break;
      case 3:
        arqueiro::chuvaDeFlechas();
        break;
      default:
        cout << "Esta nao e uma opcao valida. Tente novamente.";
        break;
    }
}

arqueiro::ataqueSimples()
{
	flechas-=1; // A cada ataque simples, será usada uma flecha.
	dano = destreza*3; // O dano do ataque 
};
				
arqueiro::rajadaDeFlechas()
{
	flechas-=3; // A cada rajada, serão usadas 3 flechas.
	dano=destreza*4;
	sp-=3;				
};

arqueiro::chuvaDeFlechas()
{
	flechas-=5; // a cada chuva, serão usadas 5 flechas.
	dano=destreza*5;
	sp-=4;				
};
	
arqueiro::defesa(bool sucesso)
{
	if(sucesso == true)
        {
        sp+=5; //Ganha 5 de SP a cada defesa realizada com sucesso
        } 
    else
        {
        hp-=0.05*hp; //Perde 5% do HP a cada defesa não realizada
        }
};
        
arqueiro::furtividade
{
    do
    {
       cout <<"MODO FURTIVO\nDados do arqueiro\nHP:\nSP:";
       hp+=25;
       sp+=20;
       sleep(3);
    }
    while (hp<hpMax && sp<spMax);
            
    if (hp==hpMax && sp==spMax)
        {
        cout << "FIM DO MODO FURTIVO";
        }
};
                
