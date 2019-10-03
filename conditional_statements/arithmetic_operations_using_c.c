#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Wednesday, September 18, 2019  */
/* Description: Arithmetic operations using switch  */

int main() {
 
 /*Code here*/
  
  arithOpt(65536,6,3);// function call
  
  
  
  
  getch();
  return 0;
}
void arithOpt(int x, int y, int choice) { // resembles--> returnType funcName(dataType1 x, dataType2 y)
  /*Code here*/
  // Choices - 1-- Add, 2-- Sub, 3--Mul
  int r;
  switch (choice) {
   case 1: r=x+y;
         break;
   case 2: r=x-y;
         break;
   case 3: r=x*y;
         break;
   //default: ;
   //      break;
  }
  // There is no such thing that scope of r is only inside the switch case or anything like that
  // r is already declared avobe and the switch case is only changing its value
  printf("You chose %d and Result for your choice %d",choice,r);
}