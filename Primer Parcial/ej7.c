//Escribir un programa que acepte fechas escritas de modo usual y las visualice como tres números. Por ejemplo, la entrada producirá la salida 15, Febrero 1989 ---> 15 2 1989 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char fechalarga[30], dia[3],mes[15],año[5];
    char meses[13]={"enero"};
    int cd,dd=0;
    printf("%c",meses[0]);
    puts("Ingrese fecha en formato largo");
    gets(fechalarga);
    for (int i = 0; (isdigit(fechalarga[i])); i++)
    {
        cd++;
    }

    printf("%d %d %d",cd,isdigit((fechalarga[0])),(fechalarga[0]-'0')*10);
    int n=1;
    for (int i = cd-1; i>=0; i--)
    {
        dd=dd+((fechalarga[i]-'0')*n);
        printf("\n%d",dd);
        n*=10;
    }
    printf("\n%d",dd);
    return 0;
}