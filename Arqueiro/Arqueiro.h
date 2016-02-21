#ifndef ARQUEIRO_H
#define ARQUEIRO_H
#include <string>
#include "Data.h" //incluindo a classe Data
#include "Inimigo.h"

using namespace std;
using std::string;

class Arqueiro
{
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
	void setFlechas(int );
	int getFlechas();
    void atirar(int , Inimigo &);
    bool defesa(bool);
    void furtividade();
private:
	int flechas;
	string nome;
	bool bemSucedida;
	const static int flechasMax = 20;
	const static int spMax = 20;
	const static double hpMax = 50;
	int hp;
	int sp;
};
#endif // ARQUEIRO_H
