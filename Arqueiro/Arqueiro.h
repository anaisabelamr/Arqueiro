#ifndef ARQUEIRO_H
#define ARQUEIRO_H
#include <string>
#include "Data.h" //incluindo a classe Data
#include "Personagem.h"
#include "Inimigo.h"
#include "Flechas.h"

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
//    Arqueiro(int hp, int sp, const string nome, Data &);
    ~Arqueiro();
	static const void dadosArqueiro();
    void atirar(Flechas &, Inimigo &);
    void adicionarFlechas(const int &);
private:
	Data dataBatalha;
    int *flechas;
    int nFlechas;
};
#endif // ARQUEIRO_H
