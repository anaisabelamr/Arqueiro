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
	void atacarArmadilha();
	void decArmadilha();
	virtual void atirar();
	virtual void dados(Hunter &);
private:
	int armadilha = 5;
};

#endif // HUNTER_H
