#include <stdio.h>

int main(){
    double pies;
    printf("Ingrese la medida en pies: ");
    scanf("%lf", &pies);
    double pulgadas=pies*12;
    printf("La medida en pulagadas es %.2lf \n", pulgadas);
    return 0;
}