//Valores Default
#include <iostream>
#include <cstring>

using namespace std;

void exibe(int num, int base=10);// base tem valor default igual a 10
void itoa(int n, char s[], int base);
void reverse(char s[]);


int main(int argc, char** argv){
    exibe(13);    //decimal, por default
    exibe(13,2);  //binário
    exibe(13,16); //hexadecimal
}

void exibe(int num, int base){
    char str[100];
    itoa(num, str, base);
    cout << str << endl;
}

/* itoa:  convert n to characters in s */
 void itoa(int n, char s[], int base){
    int i, sign;

    if ((sign = n) < 0)  /* record sign */
        n = -n;          /* make n positive */
    
    i = 0;
    
    do {       /* generate digits in reverse order */
        s[i++] = n % base + '0';   /* get next digit */
    } while ((n /= base) > 0);     /* delete it */
    
    if (sign < 0)
        s[i++] = '-';
    
    s[i] = '\0';
    
    reverse(s);
}

void reverse(char s[])
 {
    int i, j;
    char c;

    for (i = 0, j = strlen(s)-1; i<j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}  