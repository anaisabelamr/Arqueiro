#ifndef DATA_H
#define DATA_H

class Data
{
public:
    Data(int = 1, int = 1, int= 1900);
    void print() const;
    ~Data();
    
private:
    int dia; // 1-31 dependendo do mês
    int mes; // 1-12 Janeiro-Dezembro
    int ano; //Qualquer ano
    
    //Função para checar se o dia esta correto
    int checarDia(int) const;

}; // fim da classe Data

#endif // DATA_H
