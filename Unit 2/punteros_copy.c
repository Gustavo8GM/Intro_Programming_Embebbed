#include <stdio.h>
#include "../Libraries/utils.h"

int edad =25;
int mes = 2;
//int*ptr=0x7fb358001010;
//*ptr = *ptr
//*0x7fb358001010 = *0x7fb358001010*2
//free(ptr); //eliminar la variable int edad

int main(int argc, char** argv){

    printf("La variable =%d\n", edad);
    printf("La direccion de la variable= %p\n", &edad);


    //Creacion de pointers//

    int* myptr = NULL;
    myptr = &edad;
    printf("La variable pointer 'myptr' = %p\n", &myptr);
    printf("La direccion de la variable 'myptr'= %p\n", &myptr);


    //modificacion de un pointer

    int* myptr = &mes; //cambiar la direccion del pointer
    int* myptr = &edad

    //problem change the valor of edad
    printf("El valo de lo que apunta myptr = %d\n", *myptr);
    int* *myptr = *myptr *2

    int* secondPtr = NULL;
    secondPtr = myptr;

    return 0;
}