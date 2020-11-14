// Private : os membros privados somente são acessíveis às funções membros da classe. 
//A parte privada é também denominada implementação.

// Protected : os membros protegidos são como os membros privados, 
//mas eles são também acessíveis às funções membros de classes derivadas.

// Public : os membros públicos são acessíveis a todos. A parte pública 
//é também denominada interface.
#include <iostream>
#include "3_1.cpp"

using namespace std;

int main(int argc, char** argv){
    Data hoje;
    hoje.define(5,1,2000);
    hoje.exibe();
}