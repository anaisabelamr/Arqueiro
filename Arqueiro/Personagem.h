#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>
#include <iostream>

using std::ostream;
using std::string;

class Personagem
{
    
    friend ostream &operator<<(ostream &, const Personagem &);
    
public:
    Personagem();
	Personagem(string, int, int, bool);
	Personagem(const Personagem &);
    ~Personagem();
    virtual int getSp();
    virtual int getHp();
    virtual int setSp(int);
    virtual void setHp(int);
    virtual void setNome(string);
    virtual string getNome();
    virtual void diminuirHp() = 0;
    virtual void diminuirSp() = 0;
    virtual void furtividade() = 0;
    virtual bool defesa(bool) = 0;
protected:
    string nome;
    int hp;
    int sp;
	bool bemSucedida;
    const static int spMax = 20;
    const static int hpMax = 50;
    
};

#endif // PERSONAGEM_H
