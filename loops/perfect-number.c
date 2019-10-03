#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Thursday, September 19, 2019  */
/* Description: Perfect Number : If the sum of the factors of a number is double the no., then the number is a *perfect number */

int main() {
  
  /*Code here*/
  int sum=0;
  for (int i=1,n=28; i<=n; i++) { // i=0 only initialized once
   // after init --> CPU 1: Condition check, 2: Process statements, 3:Update
   if (n%i==0){
    //tab to code
    sum=sum+i;
    //printf("%d\n",i);
    if (sum==2*n){
     //tab to code
     printf("Perfect number %d ",n);
     
     
    }
   }
  }
  
  
  
  //getch();
  return 0;
}