#include <stdio.h>
#include <stdbool.h>

int main(){
   
   int size = 3;
   int orden[size] = [3, 1, 2];
   int iter = 0;
   bool proceso = iter<3;
   if(proceso){
       int i = 0;
       if (i<size){
           isLessthan = proceso[i]<proceso[i+1];
           if (!isLessthan){
               int temp = proceso[i+1];
               proceso[i+1] = arr[i];
               proceso[i] = temp;
               i++;
            }
        }else{
           iter++;

       }
    }else{
            printf("El arreglo resultante es = %d\n", orden[size]);

        }
   


}