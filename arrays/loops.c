#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Wednesday, September 18, 2019  */
/* Description: Program Description  */

int main() {
  
  /*Code here*/
    
    printf("Enter n:\n");
    
    
    for (int i=1,n=6; i<=10; i++) { // i=0 only initialized once
     printf("%d x %d = %d\n",n,i,n*i);// after init --> CPU 1: Condition check, 2: Process statements, 3:Update
     
    }
    
    
    
    
    
  
  
  //getch();
  return 0;
}