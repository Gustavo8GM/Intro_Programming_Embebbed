#include <stdio.h>
#include <stdlib.h>


int main (int argc, char ** argv){
    float num1 = atoi(argv[1]);

    float num2 = atoi(argv[2]);

    float num3 = atoi(argv[3]);

    float num4 = atoi(argv[4]);

    float num5 = atoi(argv[5]);

    float total = num1 + num2 + num3 + num4 + num5;

    float average = total/5;
    printf("The average of the data is the following:  %f\n", average);

    return 0;
}