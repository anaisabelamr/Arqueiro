#ifndef ARQUEIRO_H
#define ARQUEIRO_H
#include <string>
#include "Data.h" //incluindo a classe Data

using std::string;

class arqueiro{
	public:
        int atacar(int opcao);
		int ataqueSimples();
		int rajadaDeFlechas();
		int chuvaDeFlechas();
		bool defesa();
			
	private:
		int hp;
		int sp;
		int flechas;
		int arco;
		int adaga;
		int destreza;
        int dano;
		string nome();

        
		
		
};
#endif // ARQUEIRO_H
