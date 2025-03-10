#include <stdio.h>

int main(){
    char c1, c2;
    printf("Ingrese el primer valor: ");
    c1=getchar();
    getchar();
    printf("Ingrese el segundo valor: ");
    c2=getchar();
    int num1, num2;
    num1 = c1-'0';
    num2 = c2-'0';
    printf("El producto es: %d", num1*num2);
    return 0;
}