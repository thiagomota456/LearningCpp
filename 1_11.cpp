// Programadores em C estão habituados a empregar a diretiva #define do preproces-
// sador para definir constantes. Entretanto, a experiência tem mostrado que o uso dessa
// diretiva é uma fonte de erros difíceis de se detectar.
// Em C++, a utilização do preprocessador deve ser limitada apenas aos seguintes casos:
// • inclusão de arquivos;
// • compilação condicional.
//Deve-se usar const para constantes
#include <iostream>

using namespace std;

int main(int argc, char** argv){
    const float pi = 3.14;
    const int meses = 12;
    const char *msg = "pressione enter...";
}