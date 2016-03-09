#ifndef ARQUEIRO_H
#define ARQUEIRO_H
#include <string>
#include "Flechas.h"
#include "Data.h" //incluindo a classe Data
#include "Personagem.h"
#include "Inimigo.h"


//refazer o main

using namespace std;
using std::string;
using std::ostream;

class Arqueiro : public Personagem {
    
    friend ostream &operator<<(ostream &, const Arqueiro &);
    
public:
    
    const Arqueiro &operator=(const Arqueiro &);
    bool operator==(const Arqueiro &) const;

    Arqueiro();
    Arqueiro(int hp, int sp, const string nome, Data &);
	Arqueiro(const Arqueiro &);
    ~Arqueiro();
	static const void dadosArqueiro();
    void atirar(Inimigo &);
    void adicionarFlechas(const int &);
private:
	Data dataBatalha;
    Flechas flechas;
};
#endif // ARQUEIRO_H
