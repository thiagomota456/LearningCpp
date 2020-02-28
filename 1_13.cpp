#include <iostream>

using namespace std;

int main(int argc, char** argv){

 enum Logico {falso, verdade};

 Logico ok;

 ok = falso;
 ok = 0;        //erro em c++, ok não é do tipo int
 ok = Logico(0); // Conversão explicita permitida  

}