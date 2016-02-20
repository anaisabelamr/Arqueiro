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
    int atirar(int );
    bool defesa(bool);
    int furtividade();
			
private:
	int hp;
	int sp;
	int flechas;
    string nome;
};
#endif // ARQUEIRO_H
