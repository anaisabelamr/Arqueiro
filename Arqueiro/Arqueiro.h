#ifndef ARQUEIRO_H
#define ARQUEIRO_H
#include <string>
#include "Data.h" //incluindo a classe Data
#include "Inimigo.h"
#include "Flechas.h"

using namespace std;
using std::string;

class Arqueiro
{
    
    friend ostream &operator<<(ostream &, const Arqueiro &);
    
public:
    Arqueiro();
    Arqueiro(int hp, int sp, const string nome);
    ~Arqueiro();
    void setNome(const string);
    string getNome();
    void setHp(int );
    int getHp();
    void setSp(int );
    int getSp();
    void atirar(Flechas &, Inimigo &);
    bool defesa(bool);
    void furtividade();
    void adicionarFlechas(const int &);
	void diminuirSp();
	void diminuirHp();
//    ostream &operator<<(ostream &output, const Arqueiro &arqueiro);
private:
	string nome;
	bool bemSucedida;
    int *flechas;
    int nFlechas;
	const static int spMax = 20;
	const static double hpMax = 50;
	int hp;
	int sp;
};
#endif // ARQUEIRO_H
