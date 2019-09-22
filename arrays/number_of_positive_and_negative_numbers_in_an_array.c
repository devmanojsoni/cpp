//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Sunday, September 22, 2019  */
/* Description: No. of positive and negative nos. in an array  */

int main() {
  
  /*Code here*/
  int A[]={3,5,-2,9,-4,10,-24,19,81,-7,12,13};
  int pcount=0;
  int ncount=0;
  
  for (int i=0,n=12; i<n; i++) { // i=0 only initialized once
   if (A[i]>=0) {
    pcount=pcount+1;
   } else {
     ncount=ncount+1;
     }// after init --> CPU 1: Condition check, 2: Process statements, 3:Update
   
  }
  printf("Number of positive and negative numbers are %d and %d respectively ",pcount,ncount);
  
  getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|