#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Thursday, September 19, 2019  */
/* Description: Program Description  */

int main() {
  
  /*Code here*/
  int n, i, sum=0;
  printf("Enter n:");
  scanf("%d", &n);
  for (i=0; i<=n; i++) { // i=0 only initialized once
   sum=sum+i; // after init --> CPU 1: Condition check, 2: Process statements, 3:Update
   // sum+=i; is same as sum=sum+i
  }
  printf("Sum of n natural no. is %d ",sum);
  


  
  
  
  
  
  getch();
  return 0;
}