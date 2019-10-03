//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Sunday, September 22, 2019  */
/* Description: Sum of all elements of an array  */

int main() {
  
  /*Code here*/
  int sum=0;
  int A[]={2,4,11,8,10,15,13};
  for (int i=0,n=7; i<n; i++) { // i=0 only initialized once
   sum=sum+A[i];
   // after init --> CPU 1: Condition check, 2: Process statements, 3:Update
   
  }
  printf("Sum is %d ",sum); // u should only say dis after u r out of d loop
  
  getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|