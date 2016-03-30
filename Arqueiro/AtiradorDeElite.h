#ifndef ATIRADORDEELITE_H
#define ATIRADORDEELITE_H

#include "Personagem.h"
#include "Arqueiro.h"

class AtiradorDeElite : public Arqueiro
{

	friend ostream &operator<<(ostream &, const AtiradorDeElite &);
public:
    const AtiradorDeElite &operator=(const AtiradorDeElite &);
    bool operator==(const AtiradorDeElite &) const;
	AtiradorDeElite();
	~AtiradorDeElite();
	void decBala();
	virtual void atirar();
	virtual void dados(AtiradorDeElite &);
private:
	int bala = 5;

};

#endif // ATIRADORDEELITE_H
