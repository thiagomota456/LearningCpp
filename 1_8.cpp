#include <iostream>

using namespace std;

int main(int argc, char** argv){
    cout << "Dígite os valores (negativo finaliza): ";
    
    float soma = 0;
    
    while(true){
        float valor;
        cin >> valor;

        if(valor < 0)
            break;
        
        soma += valor;
    }

    cout << "\nSoma: " << soma << endl;
}