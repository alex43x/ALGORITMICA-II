//Hora 24--->>12
#include <stdio.h>
#include <stdlib.h>

int main(){
    char hora24[6],xm[3]={'x','m'};
    int hora=0;
    puts("Ingrese la hora en formato de 42 horas\n");
    gets(hora24);
    puts(hora24);
    if(hora24[1]!=':'){
        hora=((hora24[0]-'0')*10+(hora24[1]-'0'));
    }else{
        hora =(hora24[0]-'0');
    }
    if(hora<12){
        xm[0]='a';
    }else{
        xm[0]='p';
        hora-=12;
    }
    printf("hora %d:%c%c",hora,hora24[3],hora24[4]);
    puts(xm);

    return 0;
}