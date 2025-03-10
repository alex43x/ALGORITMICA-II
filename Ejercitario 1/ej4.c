#include <stdio.h>

int main(){
    double pulgadas;
    printf("Ingrese la medida en pulgadas: ");
    scanf("%lf", &pulgadas);
    double pies=pulgadas/12;
    printf("La medida en pies es: %.2lf", pies);
    return 0;
}