#include <stdio.h>

int main(){
    char N='Z';
    for (int i = 0; i < 26; i++)
    {
        for (int j = i; j< 26; j++)
        {
            printf("%c",N-j);
        }
        printf("\n");
    }
    


    return 0;
}