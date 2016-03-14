#ifndef HUNTER_H
#define HUNTER_H

#include "Personagem.h"
#include "Arqueiro.h"



class Hunter : Arqueiro
{
	friend ostream &operator<<(ostream &, const Hunter &);
public:
	Hunter();
	Hunter(const Hunter &);
	~Hunter();
	void atacarArmadilha();
private:
	int armadilha = 5;
};

#endif // HUNTER_H
