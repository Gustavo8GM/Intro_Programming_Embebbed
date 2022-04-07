#include <stdio.h>
#include <stdlib.h>

char name[100];
int age;

int main (){


   printf("Enter the name to use the program\n");
   scanf("%s", name);
   printf("Enter your age now\n");
   scanf("%d",&age);
   if (age<18) {
    printf("You do not have the enough age to use this program\n");
    } else{
    printf("Welcome to the program %s\t\n", name);
    }
   return(0);
}