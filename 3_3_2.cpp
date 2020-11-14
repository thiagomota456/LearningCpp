// Private : os membros privados somente são acessíveis às funções membros da classe. 
//A parte privada é também denominada implementação.

// Protected : os membros protegidos são como os membros privados, 
//mas eles são também acessíveis às funções membros de classes derivadas.

// Public : os membros públicos são acessíveis a todos. A parte pública 
//é também denominada interface.

#include <iostream>
#include <iomanip>

using namespace std;

struct Data
{
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
    hoje.define(5,1,2000);
    hoje.exibe();
}