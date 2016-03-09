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

Inimigo inimigo;
Arqueiro arqueiro;


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
Flechas::Flechas(const Flechas &flechas)
{
    this->flechaFogo = flechas.flechaFogo;
    this->flechaExplosiva = flechas.flechaExplosiva;
    this->flechaEnvenenada = flechas.flechaEnvenenada;
    this->flechaComum = flechas.flechaComum;
}
Flechas::~Flechas()
{

}
void Flechas::escolherFlecha()
{
    int opcao;
    cout << " Qual flecha o Arqueiro deve usar?\n1-Flecha Comum\n2-Flecha de Fogo\n3-Flecha Envenenada\n4-FlechaExplosiva\nOpcao: ";
    cin >> opcao;
    switch(opcao)
    {
        case 1:
            atirarFlechaComum(inimigo);
            break;
        case 2:
            atirarFlechaFogo(inimigo);
            break;
        case 3:
            atirarFlechaEnvenenada(inimigo);
            break;
        case 4:
            atirarFlechaExplosiva(inimigo);
            break;
        default:
            cout << "Opcao invalida, tente novamente.";
    }
}
void Flechas::atirarFlechaFogo(Inimigo &inimigo)
{
    flechaFogo -= 1;
	arqueiro.diminuirSp();
	cout << "\n\nO inimigo esta queimando.";
	Sleep(3000);
	inimigo.inimigoMorto();
	
}
void Flechas::atirarFlechaExplosiva(Inimigo &inimigo)
{
    flechaExplosiva -= 1;
	arqueiro.diminuirSp();
	cout << "\n\nExplosao em 3...";
	Sleep(2000);
	cout << "2...";
	Sleep(2000);
	cout << "1...\n\nBUUUUM!!";
//	inimigo.inimigoMorto();
}
void Flechas::atirarFlechaEnvenenada(Inimigo &inimigo)
{
    flechaEnvenenada -= 1;
	arqueiro.diminuirSp();
	cout << "\n\nInimigo envenenado.";
	Sleep(3000);
//	inimigo.inimigoMorto();
}
void Flechas::atirarFlechaComum(Inimigo &inimigo)
{
    flechaComum -= 1;
	arqueiro.diminuirSp();
//	inimigo.diminuirHp();
}

int Flechas::getNumeroFlechas()
{
	return nFlechas;
}

void Flechas::addNumFlechas(int n)
{
	nFlechas += n;
}
