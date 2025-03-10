#include <stdio.h>

int main()
{
    int year;
    printf("Ingrese el año: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("Es bisiesto");
    }
    else
    {
        printf("No es bisiesto");
    }
    return 0;
}