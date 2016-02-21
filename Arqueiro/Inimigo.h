#ifndef INIMIGO_H
#define INIMIGO_H

#include <string>

using namespace std;
using std::string;

class Inimigo
{
public:
	Inimigo();
	Inimigo(int hp, const string nome);
	~Inimigo();
	void setNome(const string);
    string getNome();
    void setHp(int );
    int getHp();
	const static double hpMax = 50.0;
	int hp;
	
private:
	string nome;


};

#endif // INIMIGO_H
