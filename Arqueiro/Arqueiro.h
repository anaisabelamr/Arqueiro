#ifndef ARQUEIRO_H
#define ARQUEIRO_H
#include <string>
#include "Flechas.h"
#include "Data.h" //incluindo a classe Data
#include "Personagem.h"
#include "Inimigo.h"

using namespace std;
using std::string;
using std::ostream;

class Arqueiro : public Personagem {
    
    friend ostream &operator<<(ostream &, const Arqueiro &);
    
public:
    
    const Arqueiro &operator=(const Arqueiro &);
    bool operator==(const Arqueiro &) const;

	Arqueiro();
	Arqueiro(const Arqueiro &);
    ~Arqueiro();
	virtual static const void dados(Arqueiro &, Flechas &) = 0;
    virtual void atirar(Inimigo &) = 0;
    virtual void adicionarFlechas(const int &);
	virtual void setDataBatalha(Data dataBatalha);
	virtual int getDataBatalha();
    virtual void diminuirHp();
    virtual void diminuirSp();
    virtual void furtividade();
    virtual bool defesa(bool);
private:
	Flechas flechas;
	Data dataBatalha;
};
#endif // ARQUEIRO_H
