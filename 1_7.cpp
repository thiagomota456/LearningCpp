//A notação funcional só pode ser usada com tipos simples ou definidos pelo
//usuário. Para utilizá-la com ponteiros e vetores, precisamos antes criar novos tipos.

#include <iostream>

using namespace std;

int main(int argc, char** argv){
    typedef int * ptr;
    int * i;
    double d;
    i = ptr(&d);  //notação funcional  com ponteiro
}