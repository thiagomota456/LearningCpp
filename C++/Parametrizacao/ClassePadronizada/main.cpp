#include <iostream>

using namespace std;
template <class Tipo>

class Pilha{
    public:
        Pilha(int);
        ~Pilha();
        void insere(Tipo);
        Tipo remover(void);
        Tipo topo(void);
        bool vazia(void);
        bool cheia(void);
    private:
        int maxi;
        int top;
        Tipo * mem;
};
template <class Tipo> Pilha<Tipo>::Pilha(int n)
{
    top = -1;
    mem = new Tipo[maxi = n];
}

template <class Tipo> Pilha<Tipo>::~Pilha(void)
{
    delete[] mem;
}

template <class Tipo> void Pilha<Tipo>::insere(Tipo e)
{
    if( !cheia())
        mem[++top]=e;
    else
        cout << "Pilha cheia" << endl;
}

template <class Tipo> Tipo Pilha<Tipo>::remover(void)
{
    if(!vazia())
        return mem[top--];
    else{
        cout << "Pilha vazia" << endl;
        return 0;
    }
}

template <class Tipo> Tipo Pilha<Tipo>::topo(void)
{
    if(!vazia())
        return mem[top];
    else{
        cout << "Pilha Vazia" << endl;
        return 0;
    }
}

template <class Tipo> bool Pilha<Tipo>::vazia(void)
{
    return top==-1;
}

template <class Tipo> bool Pilha<Tipo>::cheia(void)
{
    return top==maxi-1;
}

int main()
{
    //Cria pilha char

    Pilha<char> p(5);
    p.insere('a');
    p.insere('b');
    p.insere('c');

    while(!p.vazia())
        cout << p.remover() << endl;

    //Cria pilha double

    Pilha<double> q(5);
    q.insere(1.2);
    q.insere(3.4);
    q.insere(5.6);

    while(!q.vazia())
        cout << q.remover() << endl;

}
