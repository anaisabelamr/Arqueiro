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
#include "Hunter.h"
#include "AtiradorDeElite.h"


const static double hpMax = 50.0;
const static int spMax = 20;

using namespace std;

int main()
{

    vector< Arqueiro *> arqueiro;

    cout << "\nSimulando personagens\n\n";

    int i=0;
    while(i<4)
    {
        string classe;
        cout << "Classe: [1-Hunter] | [2- Atirador de Elite]: ";
        cin >> classe;
        
        if(classe=="1"){
            arqueiro.push_back(new Hunter());
            i++;
        }else if(classe=="2"){
            arqueiro.push_back(new AtiradorDeElite());
            i++;
        }
    }

    for(int j=0;j<arqueiro.size();j++){
    
        Inimigo inimigo = Inimigo();
        Hunter *hunterPtr = dynamic_cast < Hunter *> (arqueiro[j]);
        if(hunterPtr!=0){
            hunterPtr->atirar(&inimigo);
        }else{
            AtiradorDeElite *atiradorPtr = dynamic_cast <AtiradorDeElite*> (arqueiro[j]);
            atiradorPtr->atirar(&inimigo);
        }
            
    
    }
    return 0;
}

