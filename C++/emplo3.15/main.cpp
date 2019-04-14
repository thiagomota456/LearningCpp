#include <iostream>

using namespace std;

class Pilha
{
    public:
        Pilha(int);
        ~Pilha(void);
        void insere(int);
        int remover(void);
        int topo(void);
        bool vazia(void);
        bool cheia(void);

    private:
        int maxi;
        int top;
        int *mem;
};

Pilha::Pilha(int n)
{
    maxi = n;
    top = -1;
    mem = new int[n];
}

Pilha::~Pilha(void)
{
    delete[] mem;
}

void Pilha::insere(int e)
{
    if(!cheia())
        mem[++top] = e;
    else
        cout << "Pilha cheia!"<<endl;
}

int Pilha::remover(void)
{
    if(!vazia())
        return mem[top--];
    else{
        cout << "Pilha vazia!"<<endl;
        return 0;
    }

}

int Pilha::topo(void)
{
    if(!vazia())
        return mem[top];
    else
        cout << "Pilha vazia!"<<endl;

    return 0;

}
bool Pilha::vazia(void)
{
    return top==-1;
}
bool Pilha::cheia(void)
{
    return top==maxi-1;
}
//Converte decimal para binario

int main()
{
    Pilha p(32);
    unsigned n;

    cin >> n;

    do{
        p.insere(n%2);
        n /=2;
    }while(n!=0);

    cout << "Binário: ";

    while( !p.vazia())
        cout << p.remover();

    cout << endl;

}
