#include "Data.h"
#include <iostream>

using namespace std;
using std::cout;
using std::cin;

Data::Data(int dia, int mes, int ano)
{
    this-> dia=checarDia(dia);
    this-> mes=checarMes(mes);
    
    
}    // 25 de outubro de 1415
    
int Data::checarDia(int dia) const
{
    static const int diasPorMes[13]={0,31,28,31,30,30,31,31,30,31,30,31};
    
    if (dia>0 && dia <= diasPorMes[mes])
        return dia;
        
    if (mes == 2 && // testa se o mes é fevereiro
        dia == 29 && // testa se o dia é 29
        (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)))
            return dia;
    cout <<"Dia inválido.\n";
    
    return 1;
}    

int Data::checarMes(int mes) const
{
    static const int mesesPorAno[13]={0,1,2,3,4,5,6,7,8,9,10,11,12};
    
    if (mes>0 && mes <= mesesPorAno[mes])
        return mes;
}

void imprimirData(int dia, int mes, int ano)
{
    cout << "DATA: (DD/MM/AAAA): " << dia << "/" << mes << "/" << ano <<"\n";
}

Data::~Data()
{
}


