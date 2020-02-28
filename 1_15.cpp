//Alocação de memória
#include <iostream>

using namespace std;

int main(int argc, char** argv){
    int *p1 = new int;             //aloca espaço para um int
    int *p2 = new int(5);          //aloca um int com valor inicial igual a 5
    int *p3 = new int [5];         //aloca espaço para um vetor com 5 elementos
    int (*p4)[3] = new  int[2][3]; //aloca uma matriz de int 2x3
}