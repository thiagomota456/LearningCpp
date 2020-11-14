//Contrutor

#include <iostream>
#include <iomanip>

using namespace std;

class Pilha
{
    private:
        /* data */
    public:
        Pilha();     //Contrutor default
        Pilha(int n);//Contrutor com parâmetro
};


int main(int argc, char** argv){
    Pilha p;                                    // chama o construtor default
    Pilha q(10);                                // chama construtor com um parâmetro
    Pilha r = Pilha(10);                        // idem à instrução anterior
    Pilha s[10];                                // chama construtor default 10 vezes
    Pilha *t;                                   // não chama nenhum construtor
    Pilha *u = new Pilha;                       // chama o construtor default
    Pilha *v = new Pilha(5);                    // chama construtor com um parâmetro
    Pilha x[3] = {Pilha(3), Pilha(9), Pilha(7)};// inicia os elementos de x
}