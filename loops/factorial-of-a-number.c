#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Thursday, September 19, 2019  */
/* Description: factorial of a number  */

int main() {
  
  /*Code here*/
  int fact=1;
  for (int i=1,n=5; i<=n; i++) { // i=0 only initialized once
   fact*=i;// after init --> CPU 1: Condition check, 2: Process statements, 3:Update
   
  }
  printf("Factorial is %d ",fact);
  
  
  
  
  //getch();
  return 0;
}