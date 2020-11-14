//Para que implementação da classe aparecem antes da 
//declaração de sua interface é recomendavel listar primeiro os mebros publicos e deixar os privados para depois

#include <iostream>
#include <iomanip>

using namespace std;

class Data{
    
    public:
        void define(short d, short m, short a);
        void exibe(void);
    
    private:
        unsigned short data;
};

void Data::define(short d, short m, short a)
{
    data = ((a-1980)<<9) | (m<<5) | d;
}

void Data::exibe(void)
{
    cout << setw(2) << setfill('0')
    << (data & 0x1F) << "/"
    << setw(2) << setfill('0')
    << ((data>>5) & 0xF) << "/"
    << (data>>9)+1980 << endl;
}

int main(int argc, char** argv){
    Data hoje;               // uma instância simples (estática)
    Data *ontem;             // um ponteiro, não inicializado
    Data *amanha = new Data; // criação dinâmica de uma instância
    Data cronograma[31];     // um vetor de instâncias
}