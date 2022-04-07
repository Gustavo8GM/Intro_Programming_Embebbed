#include <stdio.h>
#include <stdlib.h>

int process,j,k,h;


int main() {

    for(process=1; process<=12; process++)
    {
        printf("The month %d has:\n", process);
        if (process == 2){
        for (j=1; j<=28; j++){
            printf("%d\n", j);
            }    
        }else {
            if (process==4 || process==6 || process==9 || process==11){
            for (k=1;k<=30; k++)
            {
            printf("%d\n", k);
        }      
            }
            else{
            for (h=1; h<=31; h++)
            {
            printf("%d\n", h);
        }          
            }
        }
    }
    return 0;
}