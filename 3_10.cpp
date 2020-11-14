//Certos métodos de uma classe não devem modificar os dados da classe. Nesse caso, as
//funções que implementam tais funções devem ser declaradas como constantes. Esse
//tipo de declaração reforça o controle efetuado pelo compilador e permite uma programação
// mais segura, sem nenhum custo adicional de execução.

#include <iostream>
#include <iomanip>

using namespace std;

class Data{
    
    public:
        void define(short d, short m, short a);
        void exibe(void) const;
    
    private:
        unsigned short data;
};

void Data::define(short d, short m, short a)
{
    data = ((a-1980)<<9) | (m<<5) | d;
}

void Data::exibe(void) const
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