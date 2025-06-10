/*El archivo ventas.txt contiene las ventas de un periodo de tiempo de un comercio. Leer
los montos de las ventas almacenados en el archivo e imprimir el total. Los valores de
las ventas están separados por espacios en blanco. Los valores de las ventas no
contienen puntos.*/

#include <stdio.h>

int main(){
    FILE *fp;
    int sum=0,vt=0;
    fp=fopen("C://Users//azufr//Documents//ALGORITMICA//Ejercitario 10 - Archivos//Nivel Inicial//ventas.txt","r");
    if (fp!=NULL)
    {
        while(feof(fp)==0){
            fscanf(fp,"%d",&vt);
            sum+=vt;
        }
        printf("Ventas totales: %d",sum);
        fclose(fp); 
    }else{
        printf("No se ha encontrado el archivo.");
    }   

    return 0;
}