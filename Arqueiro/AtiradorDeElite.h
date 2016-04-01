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
    AtiradorDeElite(const AtiradorDeElite &);
	~AtiradorDeElite();
	void decFlechas();
    int getFlechas();
	virtual void atirar(Inimigo *);
protected:
	int flechas = 20;

};

#endif // ATIRADORDEELITE_H
