//Declarando função na declaração da classe:
//Tmb é ppossiveis declara funções inline

#include <iostream>
#include <iomanip>

using namespace std;

class Data{
    
    public:
        void define(short d, short m, short a)
        {
            data = ((a-1980)<<9) | (m<<5) | d;
        }
        void exibe(void);
    
    private:
        unsigned short data;
};

int main(int argc, char** argv){
    Data hoje;
    hoje.define(5,1,2000);
}