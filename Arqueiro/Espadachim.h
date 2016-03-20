#ifndef ESPADACHIM_H
#define ESPADACHIM_H

#include "Personagem.h"

using std::ostream;
using std::string;

class Espadachim : public Personagem {
    
    friend ostream &operator<<(ostream &, const Espadachim &);
    
public:
    Espadachim();
    ~Espadachim();
	Espadachim(Espadachim & const)
    const Espadachim &operator=(const Espadachim &);
    bool operator==(const Espadachim &) const;    
    virtual void diminuirHp();
    virtual void diminuirSp();
    virtual void furtividade();
    virtual bool defesa(bool);
protected:
    int espada;
    


};

#endif // ESPADACHIM_H
