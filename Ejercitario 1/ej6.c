#include <stdio.h>

int main()
{
    printf("Ovalo \n");
    printf("    ****   \n");
    printf("  ********  \n");
    for (int i = 0; i < 2; i++)
    {
        printf(" ********** \n");
    }
    printf("  ********  \n");
    printf("    ****   \n");

    printf("Diamante \n");
    int length = 5;
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            printf(" ");
        }
        for (int k = 1; k < (i + 1) * 2; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf(" ");
        }
        for (int k = 1; k < (length-i-1) * 2; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("Flecha \n");
    length = 3;
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            printf(" ");
        }
        for (int k = 1; k < (i + 1) * 2; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < 4; i++)
    {
        printf("  * \n");
    }
    

    printf("Cuadrado \n");
    length = 5;
    for (int i = 0; i < 5; i++)    
    {
        for (int i = 0; i < 5; i++)
        {
            printf("  ");
            printf("*");
        }
        printf("\n");
    }

    return 0;
}