#include "Flechas.h"
#include <iostream>
#include "Arqueiro.h"
#include "Inimigo.h"
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

using namespace std;
using std::cout;
using std::cin;

Flechas::Flechas()
{
    flechaComum = 0;
    flechaEnvenenada = 0;
    flechaExplosiva = 0;
    flechaFogo = 0;
}
Flechas::Flechas(int flechaFogo, int flechaExplosiva, int flechaEnvenenada, int flechaComum)
{
    this->flechaFogo = flechaFogo;
    this->flechaExplosiva = flechaExplosiva;
    this->flechaEnvenenada = flechaEnvenenada;
    this->flechaComum = flechaComum;
}
Flechas::~Flechas()
{

}
Flechas::escolherFlecha()
{
    int opcao;
    cout << " Qual flecha o Arqueiro deve usar?\n1-Flecha Comum\n2-Flecha de Fogo\n3-Flecha Envenenada\n4-FlechaExplosiva\nOpcao: ";
    cin >> opcao;
    switch(opcao)
    {
        case 1:
            atirarFlechaComum();
            break;
        case 2:
            atirarFlechaFogo();
            break;
        case 3:
            atirarFlechaEnvenenada();
            break;
        case 4:
            atirarFlechaExplosiva()
            break;
        default:
            cout << "Opcao invalida, tente novamente.";
    }
}
Flechas::atirarFlechaFogo()
{
    
}
Flechas::atirarFlechaExplosiva()
{
    
}
Flechas::atirarFlechaEnvenenada()
{
    
}
Flechas::atirarFlechaComum()
{
    
}
