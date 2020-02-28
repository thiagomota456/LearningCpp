//É possível usar a palavra const também na definição de ponteiros. 
//Nesse caso, deve estar bem claro o que será constante: o objeto que aponta ou aquele que é apontado.

#include <iostream>

using namespace std;

int main(int argc, char** argv){

    //Não entendi direito a diferençã pratica de quando o objeto apontado é constate ou o que aponta é constante

    const char * ptr1 = "um";	      // o objeto apontado é constante
    char * const ptr2 = "dois";	      // o objeto que aponta é constante
    const char * const ptr3 = "três"; // ambos são constantes
}