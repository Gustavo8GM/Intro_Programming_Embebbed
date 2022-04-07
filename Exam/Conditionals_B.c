#include <stdio.h>
#include <stdlib.h>

int process;
int range;

int main(){

  
  printf("Enter a number to find all the divisibles by 3 and 5, since the 0 ");

  scanf("%d", &range);
  
  printf("The numbers that are divisibled by 5 and 3 since 0 to %d are: \n", range);

  for (process = 1; process <= range; process++){

      
    if (process % 3 == 0 && process % 5 == 0){

      printf("%d \n", process);
    }



  }
 
  return 0;
}
