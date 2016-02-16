#include "Data.h"

Data::Data()
{
    
int Data::checarDia(int dia) const
`{
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
    
}

Data::~Data()
{
}

