/*4. Complementar el ejercicio anterior para generar un tercer archivo llamado
resumen.txt que deberá tener la siguiente información:
****RESUMEN DE ALUMNOS QUE PASARON****
Cantidad de alumnos que pasaron: xx
Promedio de puntajes de alumnos que pasaron: xx
Puntaje mayor: xx
****RESUMEN DE ALUMNOS QUE NO PASARON****
Cantidad de alumnos que no pasaron: xx
Promedio de puntajes de alumnos que no pasaron: xx
Puntaje menor: xx*/

#include <stdio.h>

int main(){
    FILE *fp1,*fp2;
    int ci=0, nota=0,m1=0,m2=101,s1=0,s2=0,c1=0,c2=0;
    fp1=fopen("pasaron.txt","r");
    fp2=fopen("no_pasaron.txt","r");
    if (fp1!=NULL && fp2!=NULL)
    {
        while ((fscanf(fp1,"%d %d",&ci,&nota))==2)
        {
            s1+=nota;
            if(m1<nota){
                m1=nota;
            }
            c1++;
        }
        fclose(fp1);
        printf("****RESUMEN DE ALUMNOS QUE PASARON****\nCantidad de alumnos que pasaron: %d\nPromedio de puntajes de alumnos que pasaron: %f\nPuntaje mayor: %d\n",c1,(float)s1/c1,m1);
        while ((fscanf(fp2,"%d %d",&ci,&nota))==2)
        {
            s2+=nota;
            if(m2>nota){
                m2=nota;
            }
            c2++;
        }
        printf("****RESUMEN DE ALUMNOS QUE NO PASARON****\nCantidad de alumnos que no pasaron: %d\nPromedio de puntajes de alumnos que  no pasaron: %f\nPuntaje menor: %d",c2,(float)s2/c2,m2);
        fclose(fp2);
    }
}