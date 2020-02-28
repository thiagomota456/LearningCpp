#include <iostream>

using namespace std;

int n=10;

int main(int argc, char** argv){
    
    int n=20;
    {
        int n=30;
        ::n++; //Altera o valor da variavel global
        cout << ::n << " " << n << endl;
    }
    cout << ::n << " " << n << endl;
}