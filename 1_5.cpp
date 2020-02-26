#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv){
    int i = 1234;
    double d = 56.89;

    //Formato de exibição errado. Por isso valor inesperado
    printf("\ni = %i, d = %d", i, d); //Erro de conversão!

    //O erro não acontece pois não é necessário 
    //caracter de formatação de exibição
    cout << "\ni = " << i << ", d = " << d << endl;

}