#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string.h>

class Personagem
{
    
    friend ostream &operator<<(ostream &, const Personagem &);
    
public:
    Personagem();
    ~Personagem();
    int getSp();
    int getHp();
    int setSp(int sp);
    int setHp(int hp);
    int setNome(string nome);
    void getNome();
    void diminuirHp;
    void diminuirSp();
    void furtividade();
    bool defesa(bool);
    

protected:
    string nome;
    int hp;
    int sp;
	bool bemSucedida;
    const static int spMax;
    const static double hpMax;
    
};

#endif // PERSONAGEM_H
