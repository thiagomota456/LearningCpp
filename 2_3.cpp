//Passagem por referência
#include <iostream>

using namespace std;

void troca(int &, int &); //Parâmetros serão passados por referência

int main(int argc, char** argv){
    int x=5, y=7;
    cout  << "Antes : x=" << x << ", y=" << y << endl;
    troca(x,y);
    cout  << "Depois: x=" << x << ", y=" << y << endl;
}

void troca(int &a, int &b){
    int x = a;
    a = b;
    b = x;    
}