#include <stdio.h>
#include <string.h>

int main(){
    char numrom[11];
    int numarb=0;
    puts("Ingrese el numero: ");
    gets(numrom);
    for (int i = 0; i < strlen(numrom); i++)
    {
        if (numrom[i]=='M')
        {
            numarb+=1000;
        }else if(numrom[i]=='D' && numrom[i-1]!='C'){
            numarb+=500;
        }else if(numrom[i]=='C' && numrom[i+1]!='D'){
            numarb+=100;
        }else if(numrom[i]=='C' && numrom[i+1]=='D'){
            numarb+=400;
        }else if(numrom[i]=='L' && numrom[i-1]!='X'){
            numarb+=50;
        }else if(numrom[i]=='X' && numrom[i+1]!='L'){
            numarb+=10;
        }else if(numrom[i]=='X' && numrom[i+1]=='L'){
            numarb+=40;
        }else if(numrom[i]=='V' && numrom[i-1]!='I'){
            numarb+=5;
        }else if(numrom[i]=='I' && numrom[i+1]!='V'){
            numarb+=1;
        }else if(numrom[i]=='I' && numrom[i+1]=='V'){
            numarb+=4;
        }
        
    }
    
    printf("Numero arabigo: %d",numarb);
    
    return 0;
}