#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../Libraries/myFunctions.h"

bool isOddFunction(int numberToTest);

int main(int argc, char** argv){

    // par o impar
    bool isOdd = isOddFunction(2);
    printf("Result = %d\n", isOdd);


    return 0;
}

// Definir function

// bool isOddFunction(int numberToTest){
    
//     bool isOdd = (numberToTest%2 ==0);

//     if(isOdd) return true;
    

//     return false;
// }