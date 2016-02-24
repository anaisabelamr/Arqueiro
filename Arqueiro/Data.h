#ifndef DATA_H
#define DATA_H
#include <iostream>

using namespace std;
using std::cout;
using std::cin;

class Data
{
public:
    Data();
    Data(int = 15, int = 10, int= 1415);
    void imprimirData() const;
    ~Data();
	void dataBatalha(int, int, int);
    void inserirDia(int );
    void inserirMes(int );
    void inserirAno(int );
    
private:
    int dia; // 1-31 dependendo do mês
    int mes; // 1-12 Janeiro-Dezembro
    int ano; //Qualquer ano
    
    //Função para checar se o dia esta correto
    int checarDia(int, int, int);



}; // fim da classe Data

#endif // DATA_H
