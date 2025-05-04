/*Escriba una función que imprima la suma de los dígitos de un valor
entero, este deberá ser el prototipo void digito(int*).*/

#include <stdio.h>

void digito(int*N){
    char cad[50];
    sprintf(cad,"%d",*N);
    char *c=&cad[0];
    int sum=0;
    for (int i = 0; (*(c+i))!='\0'; i++)
    {
        sum+=*(c+i)-'0';
    }
    
    printf("Suma: %d", sum);
    
}

int main(){
    int N=0;
    printf("Ingrese el valor: ");
    scanf("%d",&N);
    digito(&N);

    return 0;
}