//Alocação de memória
#include <iostream>

using namespace std;

int main(int argc, char** argv){
    int *p = new int;
    int *q = new int[5];

    delete p;
    delete[] q;

}