#include <iostream>
#include <string.h>
#include "Arqueiro.h"
#include "Data.h"

const static int hpMax = 50;
const static int spMax = 20;
const static int flechasMax = 20;

using namespace std;
using std::cout;
using std::cin;


int main()
{
arqueiro a;
    
a.setNome("Oliver Queen");
    
cout << "Nome do Arqueiro: " << a.getNome() "\n" << endl;
cout << "HP: " << hpMax << "\nSP: " << spMax << "\n\n";

    
    
	return 0;
}
