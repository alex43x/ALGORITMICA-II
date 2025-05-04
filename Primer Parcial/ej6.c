#include <stdio.h>

int main(){
    int num=1900,prim=1,c=0,getit=0;

    for (int i = num; i < 2001; i++)
    {
        prim=1;
        num=i;
        printf("-->%d=",num);
        while (num!=1)
        {
            for (int j = prim+1; getit==0 ; j++)
            {
                for (int k = 1; k <=j; k++)
                {
                    if(j%k==0){
                        c++;
                    }
                }
                if(c==2){
                    prim=j;
                    getit=1;
                }
                c=0;
                
            }
            while(num%prim==0&&num!=1){
                num=num/prim;
                printf("%d*",prim);
            }
            getit=0;
        }
        printf("\n");
        
    }
    

    return 0;
}