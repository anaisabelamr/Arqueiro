#ifndef ARQUEIRO_H
#define ARQUEIRO_H
#include <string>
#include "Data.h" //incluindo a classe Data
#include "Inimigo.h"
#include "Flechas.h"

//refazer o main

using namespace std;
using std::string;
using std::ostream;

class Arqueiro
{
    
    friend ostream &operator<<(ostream &, const Arqueiro &);
    
public:
    
    const Arqueiro &operator=(const Arqueiro &);
    bool operator==(const Arqueiro &) const;

    Arqueiro();
    Arqueiro(int hp, int sp, bool bemSucedida, const string nome, Data &, Flechas *, Flechas &);
    ~Arqueiro();
    void setNome(const string);
    string getNome();
    void setHp(int );
    int getHp();
    void setSp(int );
    int getSp();
	static const void dadosArqueiro();
    void atirar(Flechas &, Inimigo &);
    bool defesa(bool);
    void furtividade();
    void adicionarFlechas(const int &);
	void diminuirSp();
	const static int spMax;
	const static double hpMax;
private:
	string nome;
	Data dataBatalha;
	bool bemSucedida;
    Flechas *flechas;
    Flechas nFlechas;
	int hp;
	int sp;
};
#endif // ARQUEIRO_H
