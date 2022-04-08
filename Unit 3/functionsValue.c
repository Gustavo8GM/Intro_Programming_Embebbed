#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../Libraries/myFunctions.h"

bool isOddFunction(int numberToTest);

int main(int argc, char** argv){

    // par o impar
    bool isOdd = isOddFunction(2);
    printf("Result = %d\n", isOdd);
    int varA = 5;
    int varB = 7;

    //varA=7, varB=5

    printf("before function varA = %d, varB = %d\n", varA, varB);
    swap(varA, varB);
    printf("after function: varA = %d, varB = %d\n", varA, varB);
    
    return 0;

}
