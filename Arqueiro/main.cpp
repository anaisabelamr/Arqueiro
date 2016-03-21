#include <iostream>
#include <string.h>
#include "Personagem.h"
#include "Inimigo.h"
#include "Arqueiro.h"
#include "Flechas.h"
#include "Data.h"
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <vector>

const static double hpMax = 50.0;
const static int spMax = 20;

using namespace std;

int main()
{
    Arqueiro arq;
	Inimigo i;
	Data d(15,6,2015);
	Flechas f;

vector<Personagem> personagem;

cout << "Simulando personagens\n\n";

while(true)
{
    int i=0;
    string p1,p2;
    cout << "Nome do personagem: ";
    cin >> p1;
    cout << "\nClasse: ";
    cin >> p2;
    
    Personagem personagem2(p1,p2);
    personagem.push_back(personagem2);
    cout << "\n\n\ncContinuar? [1-Sim] ";
    cin >> i;
    
    if (i != 1) break;
}

for(int j=0;j<personagem.size();j++)
{
    cout << "Personagem " << j << "\n\n";
    personagem[i].dados();
    cout << "\n\n";
}
    
	return 0;
}
