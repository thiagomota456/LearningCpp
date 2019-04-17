#include <iostream>

using namespace std;

template <class T>
void exibe(T *vet,int tam)
{
    for(int i=0; i<tam; i++)
        cout << vet[i] << " ";
    cout << endl;
}
int main()
{
    int x[5] = {17, 14, 65, 10, 71};
    exibe(x, 5);

    double y[3] = {19.2, 91.6, 45.7};
    exibe(y, 3);

    char *z[] = {"Thiago", "Mota"};
    exibe(z,2);
}
