#include <stdio.h>
#define MAXCAR 60
int main()
{
    char LIN[MAXCAR], LOUT[MAXCAR];
    int i,N;
    puts("INGRESE TEXTO A CODIFICAR: \n");
    gets(LIN);
    printf("Ingrese cantidad a mover");
    while((scanf("%d",&N))!=1 || N<1){
        while((N=getchar())!='\n' && N!=EOF)
        ;
        printf("El valor debe ser un nro natural:");
    }
    printf("%c",'z'-25);
    
    puts("EL TEXTO CODIFICADO ES: \n");

    for (i = 0; LIN[i] != '\0'; i++)
    {
        if (((LIN[i] >= '0') && (LIN[i] < '9')) || ((LIN[i] >= 'A') && (LIN[i] <= 'Z'-N)) || ((LIN[i] >= 'a') && (LIN[i] <= 'z'-N)))
        {
            LOUT[i] = LIN[i] + N;
        }
        else if (LIN[i] == '9')
            LOUT[i] = '0';
        else if (LIN[i] > 'Z'-N )
            LOUT[i] = LIN[i]-25+N-1;
        else if (LIN[i] > 'z'-N && LIN[i]<'z')
            LOUT[i] = 'z'-22+N;
        else
            LOUT[i] = '.';
        putchar(LOUT[i]);
    }
    putchar('\n');

    return 0;
}