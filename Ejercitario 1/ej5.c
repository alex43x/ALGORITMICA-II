#include <stdio.h>

int main(){
    double a,b,c;
    printf("Ingrese precio del primer producto: ");
    scanf("%lf", &a);
    printf("Ingrese precio del segundo producto: ");
    scanf("%lf", &b);
    printf("Ingrese precio del tercer producto: ");
    scanf("%lf", &c);
    double total= a+b+c;
    double descuento= total*0.1;
    printf("El precio con el descuento es igual a: %.2lf", total-descuento);
    return 0;
}