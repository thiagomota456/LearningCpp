#include <iostream>

using namespace std;

struct Ficha
{
    char nome[20];
    char email[30];
};

void exibe(const Ficha &f){
    cout << f.nome << ": " << f.email << endl;
}

int main(int argc, char** argv){
    Ficha usr = { "Silvio", "slago@ime.usp.br"};
    exibe(usr);
}