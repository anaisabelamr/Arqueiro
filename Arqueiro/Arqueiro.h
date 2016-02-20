#ifndef ARQUEIRO_H
#define ARQUEIRO_H
#include <string>
#include "Data.h" //incluindo a classe Data

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
    void atirar(int );
    bool defesa(bool);
    void furtividade();
	int hp;
	int sp;
	const static double hpMax = 50.0;
	const static int spMax = 20;
			
private:

	int flechas;
    string nome;
	bool bemSucedida;
	const static int flechasMax = 20;
};
#endif // ARQUEIRO_H
