#ifndef ARQUEIRO_H
#define ARQUEIRO_H
#include <string>
#include "Data.h" //incluindo a classe Data

using namespace std;
using std::string;

class arqueiro
{
public:
    arqueiro(const string &);
    void setNome(const string &);
    string getNome();
    arqueiro();
    ~arqueiro();
    static int atacar();
    int ataqueSimples();
    int rajadaDeFlechas();
    int chuvaDeFlechas();
    bool defesa(bool);
    int furtividade();
			
private:
	int hp;
	int sp;
	int flechas;
	int arco;
	int destreza;
    int dano;
    string nome;
};
#endif // ARQUEIRO_H
