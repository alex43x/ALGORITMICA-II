#include <stdio.h>
#include <string.h>

int main(){
    char cadena[30];
    char vocales[12]={"aeiouAEIOU"};
    int c=0;

    puts("Ingrese una oracion\n");
    gets(cadena);

    for (int i = 0; cadena[i]!='\0'; i++)
    {
        if(strchr(vocales,cadena[i])!=NULL){
            c++;
        }
    }

    printf("Cantidad de vocales %d",c);
    
    return 0;
}