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
    void diminuirHp();
	void inimigoMorto();
private:
	string nome;
    int hp;
};

#endif // INIMIGO_H
