//classe Pilha

#include <iostream>
#include <iomanip>

using namespace std;

class Pilha
{
    public:
        Pilha(int);     //Contrutor default
        ~Pilha(void);   //Destrutor
        void insere(int);
        int remove(void);
        int topo(void);
        bool vazia(void);
        bool cheia(void);

    private:
        int max;
        int top;
        int *mem;
};

Pilha::Pilha(int n){
    max = n;
    top = -1;
    mem = new int[n];
}

Pilha::~Pilha(void){
    delete[] mem;
}

void Pilha::insere(int e){
    if( !cheia() )
        mem[++top] = e;
    else
        cout << "pilha cheia!" << endl;
    
}

int Pilha::remove(void){
    if( !vazia() )
        return mem[top--];
    else{
        cout << "pilha vazia!" << endl;
        return 0;
    }
}

int Pilha::topo(void){
    if( !vazia() )
        return mem[top];
    else
    {
        cout << "pilha vazia!" << endl;
        return 0;
    }
}

bool Pilha::vazia(void){
    return top==-1;
}

bool Pilha::cheia(void){
    return top==max-1;
}

