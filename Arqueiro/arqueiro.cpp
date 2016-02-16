#include <string>
#include "Arqueiro.h"
#include <iostream>
using namespace std;

        arqueiro::nome()
        {
            cout << "Digite um nome para o arqueiro: ";
            cin >> arqueiro.nome ;
        }

        arqueiro::atacar(int opcao)
        {
            cout << "Digite o numero correspondente ao ataque desejado:\n1-Ataque Simples\n2-Rajada de Flechas\n3-Chuva de Flechas";
            cin >> opcao;
            switch(opcao){
                case 1:
                    ataqueSimples();
                    break;
                case 2:    
                    rajadaDeFlechas();
                    break;
                case 3:
                    chuvaDeFlechas();
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
	
		arqueiro::defesa(
		{
			if(sucesso == true){
				sp+=5; //Ganha 5 de SP a cada defesa realizada com sucesso
			} else {
				hp-=0.05*hp; //Perde 5% do HP a cada defesa não realizada
			}
		};
