//uso da classe Pilha

#include <iostream>
#include <iomanip>
#include "3_15.cpp"

using namespace std;


int main(int argc, char** argv){
    
    //Converte decimal para binário
    Pilha p(32);
    unsigned int n;

    cout << "Número positivo? ";
    cin >> n;

    do{
        p.insere(n%2);
        n /=2;
    }while ( n!=0 );

    while (!p.vazia())
        cout << p.remove();
    
    cout << endl;
}