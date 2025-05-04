#include <stdio.h>
#include <string.h>

int main(){
    char cadena1[50],cadena2[50];
    puts("Ingrese la cadena 1");
    gets(cadena1);
    puts("Ingrese la cadena 2");
    gets(cadena2);
    if(strcmp(cadena1,cadena2)==0){
        printf("Iguales");
    }else{
        printf("Distintas");
    }

    return 0;
}