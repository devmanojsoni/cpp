#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Thursday, September 19, 2019  */
/* Description: sum upto n  */

int main() {
  
  /*Code here*/
  int sum=0;
  for (int i=0,n=10; i<n; i++) { // i=0 only initialized once
   sum=sum+i;// after init --> CPU 1: Condition check, 2: Process statements, 3:Update
   
  }
  printf("%d Sum is",sum);
  
  
  
  
  
  //getch();
  return 0;
}