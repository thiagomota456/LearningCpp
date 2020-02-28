//Referência
#include <iostream>

using namespace std;

int main(int argc, char** argv){
    int n=5;
    int &nr = n; //nr agora é uma referencia de n
    int *ptr = &nr; //ptr aponta nr (e n também)
    cout << "n = " << n << " nr = " << nr << endl;
    
    n+=2;
    cout << "n = " << n << " nr = " << nr << endl;

    *ptr = 3;
    cout << "n = " << n << " nr = " << nr << endl;
}