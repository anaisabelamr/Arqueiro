#ifndef ESPADACHIM_H
#define ESPADACHIM_H

#include "Personagem.h"

class Espadachim : public Personagem {
    
    friend ostream &operator<<(ostream &, const Espadachim &);
    
public:
    Espadachim();
    ~Espadachim();
    
public:
    void atacar();
protected:
    int espada;
    


};

#endif // ESPADACHIM_H
