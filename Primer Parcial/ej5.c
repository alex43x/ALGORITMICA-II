#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char cadena[50];
    int c=0;
    puts("Ingrese cadena ");
    gets(cadena);
    for (int i = 0; cadena[i]!='\n'; i++)
    {
        if(isblank(cadena[i])){
            c++;
        }
    }
    printf("Cantidad de palabras: %d",c);
    
    return 0;
}