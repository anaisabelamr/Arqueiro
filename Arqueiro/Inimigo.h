#ifndef INIMIGO_H
#define INIMIGO_H

#include "Personagem.h"

#include <string>

using namespace std;
using std::string;

class Inimigo : public Personagem
{
public:
	Inimigo();
	Inimigo(int hp, const string nome);
	~Inimigo();
	void inimigoMorto();
private:

};

#endif // INIMIGO_H
