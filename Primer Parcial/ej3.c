#include <stdio.h>
#include <string.h>

int main(){
    char cadena[50];
    puts("Ingrese la cadena");
    gets(cadena);
    int len=strlen(cadena);
    for (int i = len-1; i>=0; i--)
    {
        putchar(cadena[i]);
    }
    
    return 0;
}