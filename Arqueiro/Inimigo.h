#ifndef INIMIGO_H
#define INIMIGO_H

#include "Personagem.h"

#include <string>

using namespace std;
using std::string;

class Inimigo
{
public:
	Inimigo();
	Inimigo(int hp, const string nome);
	Inimigo(const Inimigo &);
	~Inimigo();
	void inimigoMorto();
private:
    int hp;
    string nome;
};

#endif // INIMIGO_H
