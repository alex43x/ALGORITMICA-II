/*El archivo puntajes.txt contiene los puntajes obtenidos por los alumnos en el examen
de programación. Los alumnos que obtuvieron un puntaje mayor o igual a 60,
superaron la materia. Los alumnos que obtuvieron un puntaje menor a 60 deberán
rendir un examen recuperatorio. Leer el archivo y separar los puntajes en dos
archivos. Por un lado el archivo pasaron.txt contendrá los puntajes de los alumnos
que pasaron. Por el otro lado, el archivo no_pasaron.txt contendrá los puntajes de
los alumnos que no pasaron.*/

#include <stdio.h>

int main(){
    FILE *fp1,*fp2,*fp3;
    int ci,nota;
    fp1=fopen("puntajes.txt","r");
    fp2=fopen("pasaron.txt","w");
    fp3=fopen("no_pasaron.txt","w");

    if(fp1!=NULL&& fp2!=NULL&& fp3!=NULL){
        while ((fscanf(fp1,"%d %d",&ci,&nota))==2)
        {
            if (nota<60){
                fprintf(fp3,"%d %d\n",ci,nota);
            }else{
                fprintf(fp2,"%d %d\n",ci,nota);
            }
        }
    }else{
        printf("Error al abrir archivos.");
    }
    return 0;
}