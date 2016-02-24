#include "Data.h"
#include <iostream>
#include <windows.h>

using namespace std;
using std::cout;
using std::cin;

Data data;

Data::Data(int dia, int mes, int ano)
{
    this-> dia=checarDia(dia);
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

int Data::dataBatalha(int dia, int mes, int ano)
{
	cout << "Digite a data da Batalha (DD/MM/AAAA)\n";
	cin >> dia;
	cin >> mes;
	cin >> ano;
	
	cout << "\n\nData da batalha: " << dia << "/" << mes << "/" << ano ;
}

Data::~Data()
{
}


