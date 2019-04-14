#include <iostream>

using namespace std;

int n = 10;

int main()
{
    int n = 20;
    {
        int n = 30;

        //Altera o valor da variavel global
        ::n++;

        cout << ::n << " " << n << endl;

    }
    cout << ::n << " " << n << endl;
}
