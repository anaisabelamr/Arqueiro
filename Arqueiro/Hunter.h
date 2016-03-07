#ifndef HUNTER_H
#define HUNTER_H

#include "Personagem.h"
#include "Arqueiro.h"

class Hunter : Arqueiro
{
public:
	Hunter();
	~Hunter();
	void atacarArmadilha();
private:
	int armadilha = 5;
};

#endif // HUNTER_H
