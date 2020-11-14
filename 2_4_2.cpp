#include <iostream>

using namespace std;

bool abrir(FILE *&arquivo, char *nome){
    if( (arquivo=fopen(nome,"r"))==NULL ) //Se o arquivo não exitir
        arquivo=fopen(nome,"w");          //Cria arquivo vazio
    
    return arquivo!=NULL;                 //Informa se o arquivo foi aberto
}

int main(int argc, char** argv){

}