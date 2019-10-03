#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Tuesday, September 17, 2019  */
/* Description: Program Description  */

int main() {
 
 /*Code here*/
  
  maxOfThreeNumbers(3000,400,60);// function call
  
  
  
  
  getch();
  return 0;
}
void maxOfThreeNumbers(int a, int b, int c) { // resembles--> returnType funcName(dataType1 x, dataType2 y)
  /*Code here*/
  if ( (a>b ) && ( a>c )) {
    //tab to make changes
   printf("a");
  } else if (b>c) {
     printf("b");
    } else {
      printf("c");
      }
}