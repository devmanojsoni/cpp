#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Thursday, September 19, 2019  */
/* Description: fACTORS OF A PROGRAM  */

int main() {
  
  /*Code here*/
  for (int i=1,n=30; i<=n; i++) { // i=0 only initialized once
   // after init --> CPU 1: Condition check, 2: Process statements, 3:Update
   if ((n%i==0)){
    //tab to code
    printf("%d\n",i);
   }
  }
  
  
  
  //getch();
  return 0;
}