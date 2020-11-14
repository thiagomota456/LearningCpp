//Funções inline
//Uma função inline é restrita apenas ao módulo no
//qual ela é declarada, isso vale mesmo no caso de funções membros.
#include <iostream>

using namespace std;

inline double sqr(double n) { return n * n; } 

int main(int argc, char** argv){
    cout << sqr(10) << endl;
}