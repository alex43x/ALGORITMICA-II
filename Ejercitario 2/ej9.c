#include <stdio.h>

int main()
{
    int num;
    printf("Ingrese nro obtenido: ");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("Seis");
    }
    else if (num == 2)
    {
        printf("Cinco");
    }
    else if (num == 3)
    {
        printf("Cuatro");
    }
    else if (num == 4)
    {
        printf("Tres");
    }
    else if (num == 5)
    {
        printf("Dos");
    }
    else if (num == 6)
    {
        printf("Uno");
    }
    else{
        printf("Un DADO no tiene ese numero");
    }

    return 0;
}