#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv){
    float number1 = atoi(argv[1]);

    float number2 = atoi(argv[2]);

    int add = number1 + number2;

    int substraction = number1 - number2;

    int multiplication = number1 * number2;

    float division = number1 / number2;

    printf("The total sum is equal to %d\n", add);

    printf("The total rest is equal to %d\n", substraction);

    printf("The total multiplication is equal to %d\n", multiplication);

    printf("The total division is equal to %f\n", division);

    return 0;
}