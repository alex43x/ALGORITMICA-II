#include <stdio.h>

int main()
{
    char num[6];
    printf("Ingrese el numero: ");
    for (int i = 0; i < 5; i++)
    {
        num[i] = getchar();
    }
    num[5] = '\0';

    printf("Centena: %c", num[2]);
    return 0;
}