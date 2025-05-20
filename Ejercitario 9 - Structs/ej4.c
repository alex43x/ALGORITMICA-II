/*Escribir un programa para calcular el número de días que hay entre dos fechas:
declarar fecha como una estructura.*/

#include <stdio.h>
#include <stdlib.h>  

typedef struct {
    int day;
    int month;
    int year;
} fecha;

int esBisiesto(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Devuelve días desde 01/01/0001 hasta la fecha f
int diasDesdeOrigen(fecha f) {
    int days = f.day;
    int diasMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Añadir días de los meses anteriores
    for (int i = 0; i < f.month - 1; i++) {
        days += diasMes[i];
    }

    // Añadir un día si es año bisiesto y el mes es después de febrero
    if (f.month > 2 && esBisiesto(f.year)) {
        days++;
    }

    // Añadir días por los años completos anteriores
    for (int y = 1; y < f.year; y++) {
        days += esBisiesto(y) ? 366 : 365;
    }

    return days;
}

int diasEntre(fecha f1, fecha f2) {
    int d1 = diasDesdeOrigen(f1);
    int d2 = diasDesdeOrigen(f2);
    return abs(d2 - d1);
}

int main() {
    fecha f1 = {1, 1, 2000};
    fecha f2 = {1, 1, 2001};

    int dias = diasEntre(f1, f2);
    printf("Días entre fechas: %d\n", dias);
    return 0;
}
