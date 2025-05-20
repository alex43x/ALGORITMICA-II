/*Escribir una función en C que reciba un número entero que represente a un
mes, y otro número entero que represente a un año (se puede suponer que
ambos valores son válidos), y que devuelva la cantidad de días que tiene el
correspondiente mes. Se debe considerar si el año es bisiesto o no.*/

#include <stdio.h>
int esBisiesto(int year){
    if((year%4==0 && year%100!=0 )||year%400==0){
        return 1;
    }else{
        return 0;
    }
}

int calcularDias(int mes, int year){
    
    int dias[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if (mes==1 && esBisiesto(year)){
        return 29;
    }else{
        return dias[mes];
    }
}

int main(){
    int mes=2,year=2024;
    printf("Dias: %d",calcularDias(mes-1,year));
    return 0;
}