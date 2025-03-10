#include <stdio.h>

int main()
{
    char num[7];
    printf("Ingrese el numero: ");
    for (int i = 0; i < 6; i++)
    {
        num[i] = getchar();
    }
    num[6] = '\0';
    printf("Numero invertido: ");
    for (int i = 5; i > -1; i--)
    {
        printf("%c",num[i]);
    }
    return 0;
}