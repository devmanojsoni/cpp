#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Wednesday, September 18, 2019  */
/* Description: Switch case menu driven program  */

int main() {
  
  /*Code here*/
  printf("Menu\n");
  printf("1. Add\n2. Sub\n3. Mul\n4. Div\n");
  
  int option;
  printf("Enter your choice\n");
  scanf("%d", &option);
  int a,b,c;
  printf("Enter two numbers\n");
  scanf("%d\n", &a);
  scanf("%d", &b); //Adding \n here causing issues in C

  switch (option) {
   case 1: c=a+b;
         break;
   case 2: c=a-b;
         break;
   case 3: c=a*b;
         break;
   case 4: c=a/b;
         break;
   default: printf("Invalid Choice");
         break;
  }
  printf("Result is %d:", c);
  





  
  
  
  
  
  getch();
  return 0;
}