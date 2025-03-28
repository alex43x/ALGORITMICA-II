#include <stdio.h>
#include <time.h>
#include <ctype.h>

int main()
{
    int opt = 0;
    while (opt != 4)
    {
        printf("\n*----MENU----*\n1-Triangulo de letras\n2-Numeros Primos\n3-Calculo de edad\n4-Salir\nIngrese una opcion para continuar...");
        do
        {
            while ((scanf("%d", &opt)) != 1)
            {
                while ((opt = getchar()) != '\n' && opt != EOF)
                    ;
                printf("Por favor ingrese una opcion valida...\n");
            }
            if (opt < 1 || opt > 4)
            {
                printf("El valor debe estar incluido entre las opciones...\n");
                printf("MENU\n1-Triangulo de letras\n2-Numeros Primos\n3-Calculo de edad\n4-Salir\nIngrese una opcion para continuar...");
            }
        } while (opt < 1 || opt > 4);

        if (opt == 1)
        {
            char letter;
            int sum = 0;
            printf("Triangulo de letras\nIngrese la letra de inicio...\n");
            do
            {
                while (getchar() != '\n')
                    ;
                letter = getchar();
                if (!isalpha(letter))
                {
                    printf("Debes ingresar una letra...\n");
                }

            } while (!isalpha(letter));
            letter = tolower(letter);
            printf("Triangulo:\n");
            for (int i = 0; (letter + i != 'z' + 1); i++)
            {
                for (int j = 0; j < i + 1; j++)
                {
                    printf("%c", letter + i);
                    sum++;
                }
                printf("\n");
            }
            printf("Cantidad de letras: %d", sum);
        }
        else if (opt == 2)
        {
            int N, sum = 0, c = 0;
            printf("Ingrese un numero para calcular nros primos\n");
            do
            {
                while ((scanf("%d", &N) != 1))
                {
                    while ((N = getchar()) != '\n' && N != EOF)
                        ;
                    printf("El valor debe ser un numero natural");
                }
                if (N < 1)
                {
                    printf("Ingrese un valor igual o superior a 1\n");
                }
            } while (N < 1);

            for (int j = 2; j < N; j++)
            {
                for (int i = 1; i <= j; i++)
                {
                    if (j % i == 0)
                    {
                        c++;
                    }
                }
                if (c == 2)
                {
                    printf("%d, ", j);
                    sum++;
                }
                c = 0;
            }
            printf("\nCantidad de numeros: %d\n", sum);
        }
        else if (opt == 3)
        {
            int year, month, day, yn, mn, dn, bisiesto, dayok;
            int dias[12]={31,28,31,30,31,30,31,31,30,31,30,31};
            time_t now;
            time(&now);
            struct tm *local = localtime(&now);
            dn = local->tm_mday;
            mn = local->tm_mon + 1;
            yn = local->tm_year + 1900;
            printf("Año de nacimiento...\n");
            do
            {
                while ((scanf("%d", &year) != 1))
                {
                    while ((year = getchar()) != '\n' && year != EOF)
                        ;
                    printf("El valor debe ser un numero natural");
                }
                if (year < 1)
                {
                    printf("Ingrese un valor igual o superior a 1\n");
                }
            } while (year < 1);
            if (year % 400 == 0 || (year % 4 == 0 && (year % 100 != 0)))
            {
                bisiesto = 1;
            }
            else
            {
                bisiesto = 0;
            }
            printf("Mes de nacimiento...\n");
            do
            {
                while ((scanf("%d", &month) != 1))
                {
                    while ((month = getchar()) != '\n' && month != EOF)
                        ;
                    printf("El valor debe ser un numero natural");
                }
                if (month < 1 || month > 12)
                {
                    printf("Ingrese un valor igual o superior a 1 y menor o igual a 12\n");
                }
            } while (month < 1 || month > 12);
            printf("Dia de nacimiento...\n");
            do
            {
                while ((scanf("%d", &day) != 1))
                {
                    while ((day = getchar()) != '\n' && day != EOF)
                        ;
                    printf("El valor debe ser un numero natural");
                }
                if (day < 1)
                {
                    printf("Ingrese un valor igual o superior a 1\n");
                }
                if((dias[month-1]<day)||(month==2 && bisiesto==0 && day>28)){
                    printf("Ese mes no incluye esa fecha");
                    dayok=0;
                }else{
                    dayok=1;
                }
            } while (day < 1 || day > 31||dayok==0);
            int yy,mm,dd;
            if (day>dn){
                dd=day-dn;
                month--;
            }else{
                dd=dn-day;
            }
            if (month>mn){
                yy=yn-year-1;
                mm=mn-month+12;
            }else{
                yy=yn-year;
                mm=month-mn;
            }
            printf("%d años %d meses  %d dias",yy,mm,dd);
        }else if(opt==4){
            printf("\nGracias por usar el programa...");
        }
    }

    return 0;
}