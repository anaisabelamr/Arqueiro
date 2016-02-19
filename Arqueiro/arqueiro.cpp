#include "Arqueiro.h"
#include <string>
#include <iostream>
#include <windows.h>
#include <stdlib.h>


using std::cout;
using std::cin;

arqueiro::arqueiro()
{
    this->nome = "";
    hp = 0;
    sp = 0;
}
arqueiro::arqueiro(int hp, int sp, const string nome)
{
    this->hp = hp;
    this->sp = sp;
    this->nome = nome;
}    
void arqueiro::setNome(string nome)
{
    this->nome = nome;
}
string arqueiro::getNome()
{
    return nome;
}
void arqueiro::setHp(int hp)
{
    this->hp = hpMax;
}
int arqueiro::getHp()
{
    return hp;
}
void arqueiro::setSp(int sp)
{
    this->sp = spMax;
}
void arqueiro::getSp()
{
    return sp;
}
