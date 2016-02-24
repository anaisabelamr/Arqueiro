#ifndef FLECHAS_H
#define FLECHAS_H

#include "Inimigo.h"

class Flechas
{
public:
    Flechas();
    Flechas(int, int, int, int);
    ~Flechas();
    void escolherFlecha();
    void atirarFlechaFogo(Inimigo &);
    void atirarFlechaExplosiva(Inimigo &);
    void atirarFlechaEnvenenada(Inimigo &);
    void atirarFlechaComum(Inimigo &);
    
private:
    int flechaFogo = 10;
    int flechaExplosiva = 5;
    int flechaEnvenenada = 5;
    int flechaComum = 20;
    

};

#endif // FLECHAS_H
