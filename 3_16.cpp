//uso da classe Pilha

#include <iostream>
#include <iomanip>
#include "3_15.cpp"

using namespace std;

void exibeTopo(Pilha q){
    cout << "Topo da pilha: " << q.remove() << endl;
}

int main(int argc, char** argv){
    Pilha p(5);
    p.insere(9);
    p.insere(93);
    p.insere(99);
    exibeTopo(p);
}