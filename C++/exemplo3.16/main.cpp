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

Pilha::Pilha(const Pilha &p)
{
    maxi = p.maxi;
    top = p.top;
    mem = new int[maxi];

    for(int i=0; i <= top; i++)
        men[i] =p.mem[i];
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

void exibeTopo(Pilha q)
{
    cout << "Topo da pilha: " << q.remover() << endl;
}

int main()
{
    Pilha p(5);
    p.insere(99);
    Pilha q(p);
    exibeTopo(q);

    //Erro pois descontruo também p

    p.insere(2);
}
