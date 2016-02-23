#ifndef FLECHAS_H
#define FLECHAS_H

class Flechas
{
public:
    Flechas();
    Flechas(int, int, int, int);
    ~Flechas();
    void escolherFlecha();
    void atirarFlechaFogo();
    void atirarFlechaExplosiva();
    void atirarFlechaEnvenenada();
    void atirarFlechaComum();
    
private:
    const static int flechas[20];
    int flechaFogo;
    int flechaExplosiva;
    int flechaEnvenenada;
    int flechaComum;
    

};

#endif // FLECHAS_H
