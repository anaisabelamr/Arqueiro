#ifndef HUNTER_H
#define HUNTER_H

#include "Personagem.h"
#include "Arqueiro.h"
#include "Inimigo.h"



class Hunter : public Arqueiro
{
	friend ostream &operator<<(ostream &, const Hunter &);
public:
    const Hunter &operator=(const Hunter &);
    bool operator==(const Hunter &) const;
	Hunter();
	Hunter(const Hunter &);
	~Hunter();
	void decArmadilha();
    int getArmadilha();
	virtual void atirar(Inimigo *);
protected:
	int armadilha = 5;
};

#endif // HUNTER_H
