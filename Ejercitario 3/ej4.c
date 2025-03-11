#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    while (n < 1){
        printf("Ingrese un numero natural:");
        scanf("%d", &n);
    }
    printf("Numero\tCuad\tCubo\tRaiz\n");
    for (int i=1; i <= n; i++)
    {
        printf("%d\t%.2lf\t%.2lf\t%.2lf \n",i,pow(i,2),pow(i,3),sqrt(i));
    }

    return 0;
}