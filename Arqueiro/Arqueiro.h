#ifndef ARQUEIRO_H
#define ARQUEIRO_H
#include <string>
#include "Data.h" //incluindo a classe Data

using std::string;

class arqueiro
{
public:

// Nomes dos arqueiros: Clint Barton, Oliver Queen e Katniss Everdeen xD

    arqueiro(string,int,int);
    void setNome(string nome);
    string getNome();
    arqueiro();
    ~arqueiro();
    static int atacar(int opcao);
    int ataqueSimples();
    int rajadaDeFlechas();
    int chuvaDeFlechas();
    bool defesa(bool sucesso);
    int furtividade();
			
private:
	int hp;
	int sp;
	int flechas;
	int arco;
	int destreza;
    int dano;
};
#endif // ARQUEIRO_H
