#ifndef FLECHAS_H
#define FLECHAS_H

#include "Personagem.h"

#include "Inimigo.h"

class Flechas
{
public:
    Flechas();
    Flechas(int, int, int, int);
	Flechas(const Flechas &);
    ~Flechas();
    void escolherFlecha(Inimigo &);
    void atirarFlechaFogo(Inimigo &);
    void atirarFlechaExplosiva(Inimigo &);
    void atirarFlechaEnvenenada(Inimigo &);
    void atirarFlechaComum(Inimigo &);
	int getNumeroFlechas();
    int getNumeroFlechasComum();
    int getNumeroFlechasExplosiva();
    int getNumeroFlechasEnvenenada();
    int getNumeroFlechasFogo();
	void addNumFlechas(int);
private:
    int flechaFogo = 10;
    int flechaExplosiva = 5;
    int flechaEnvenenada = 5;
    int flechaComum = 20;
    int nFlechas = 40;

};

#endif // FLECHAS_H
