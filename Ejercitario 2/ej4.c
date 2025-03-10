#include <stdio.h>

int main()
{
    char c1;
    printf("Ingrese la letra minuscula ");
    c1 = getchar();
    getchar();
    c1 = toupper(c1);
    printf("En mayusculas: %c", c1);
    return 0;
}