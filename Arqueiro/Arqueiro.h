#ifndef ARQUEIRO_H
#define ARQUEIRO_H
#include <string>
#include "Data.h" //incluindo a classe Data

using namespace std;
using std::string;

class arqueiro
{
public:
    arqueiro();
    arqueiro(int hp, int sp, const string nome);
    ~arqueiro();
    void setNome(const string);
    string getNome();
    void setHp();
    int getHp();
    int setSp();
    int getSp();
    int menuAtaque();
    int ataqueSimples(int flechas);
    int rajadaDeFlechas(int sp,int flechas);
    bool defesa(bool);
    int furtividade();
			
private:
	int hp;
	int sp;
	int flechas;
    string nome;
};
#endif // ARQUEIRO_H
