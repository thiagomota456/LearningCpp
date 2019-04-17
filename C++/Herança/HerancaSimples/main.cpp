#include <iostream>

using namespace std;

class Ponto{
    public:
        Ponto(int x, int y): x(x), y(y){} //Inicialização != de atribuição
    private:
        int x;
        int y;
};

class Pixel : Ponto{
    public:
        Pixel(int x, int y, int c);
        void acende(void);
        void apaga(void);
    private:
        int cor;

};
int main()
{

}
