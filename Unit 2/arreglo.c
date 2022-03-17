#include <stdio.h>
#include "../Libraries/utils.h"


int arreglo[3] = {5,1,10};
int size=3;
int main(){

    for(int index = 0; index < size; index++){

        printf("arreglo %d\n", arreglo[index]);


        sleep(1000);
    }



    return 0;
}