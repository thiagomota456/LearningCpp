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
    Data hoje;              
    Data *ontem;             
    Data *amanha = new Data; 
    Data cronograma[31];     

    hoje.define(5,1,2000);   //ponto para instâncias
    amanha->define(6,1,200); // seta para ponteiros
    cronograma[0].define(15,4,2000);

    

}