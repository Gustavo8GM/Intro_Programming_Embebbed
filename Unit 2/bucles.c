#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char** argv){


    for (int entero = 0; entero<=100; entero = entero+1){

        printf("el numero es : %d\n", entero);


    }

    bool isTemperaturelow = true;
    int sensorPin = 0;
    while (isTemperaturelow) {

        sensorPin = rand()%200;
        printf("my sensor is: %d\n", sensorPin);
        isTemperaturelow = (sensorPin <=190);

    }

    return 0;
}