#include <iostream>
#include <math.h>

using namespace std;
class Complexo
{
    public :
        Complexo(double a, double b){r=a; i=b;}
        Complexo operator+(Complexo c){return Complexo(r+c.r, i+c.i);}
        Complexo operator+(double d){return Complexo(r+d, i);}
        void exibe(void){cout << r << (i<0? "-" : "+") << fabs(i) << "i/n" << endl;}

    private :
        double r;
        double i;
};


int main()
{
    Complexo a(1,2);
    Complexo b(3,-4);
    Complexo c  = a+b; //uso do operador sobrecarregado

    a.exibe();
    b.exibe();
    c.exibe();
    (a+b+c).exibe();

    Complexo d = a+5;

    d.exibe();

}
