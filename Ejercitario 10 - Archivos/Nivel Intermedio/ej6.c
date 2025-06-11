/*Una empresa de distribución de agua almacena sus lecturas mensuales de los
medidores de agua de los clientes en un archivo con el siguiente formato:
numero_cliente, lectura_anterior, lectura_actual
Todos los datos son numéricos. Tanto la lectura anterior como la actual están
medidas en m3.
Escribir un programa que permita calcular la cantidad de m3 consumidos por el
cliente en un mes y permita determinar la cantidad adeudada por cada cliente. El
programa deberá realizar los cálculos y generar un archivo con el siguiente
formato:
numero_cliente, deuda
El costo del agua es de 10.000 por m3*/

#include <stdio.h>

int main(){
    FILE *fp1,*fp2;
    int cli=0,lp=0,la=0;
    fp1=fopen("lectura.txt","r");
    fp2=fopen("deudas.txt","w");
    if(fp1!=NULL && fp2!=NULL){
        while (fscanf(fp1,"%d %d %d",&cli,&lp,&la)==3)
        {
            fprintf(fp2,"%d %d\n",cli,(la+lp)*10000);
        }
        fclose(fp1);
        fclose(fp2);
    }else{
        printf("No se ha podido abrir uno de los archivos");
    }
    return 0;
}