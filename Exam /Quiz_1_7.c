#include <stdio.h>
#include <stdlib.h>

float nu1, nu2, nu3 = 0;

int main(){

    printf("Enter three different numbers to compare\n");
    scanf("%f", &nu1);
    scanf("%f", &nu2);
    scanf("%f", &nu3);

    if(nu1>nu2 && nu1>nu3){

        printf("The number %f is the greatest\n", nu1);
    }else{

        
    }

    if(nu2>nu1 && nu2>nu3){

        printf("The number %f is the greatest\n", nu2);
    }else{


    }

    if(nu3>nu1 && nu3>nu2){
        printf("The number %f is the greatest\n", nu3);
    }else{
        
    }



    return 0;
}