#include <stdio.h>
#include "../Libraries/utils.h"

int main(){

    for (int i = 0; i <= 50; i = i + 10){
        printf("proceso del programa: %d\n", i);
        sleep(1000);


        int counter = 1;
        while (counter <= 3){
            printf("\t proceso del programa: %d\n", counter);
            counter++; //está incrementando
            sleep(1000);


            for (int j = 0; j<2; j++){

                printf("\t \t... \n");

            }



        }


    }



    return 0;
}