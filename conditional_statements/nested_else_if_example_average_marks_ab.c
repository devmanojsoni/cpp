#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Tuesday, September 17, 2019  */
/* Description: Program Description  */

int main() {
 
 /*Code here*/
  
  grades(10,10,10);// function call
  
  
  
  
  getch();
  return 0;
}
void grades(int m1, int m2, int m3) { // resembles--> returnType funcName(dataType1 x, dataType2 y)
  /*Code here*/
  float total,avg;
  total=m1+m2+m3;
  avg=total/3;
  // sample use-case
  if (avg>=60) {
   printf("Grade A");
   
  } else if ((avg>=35) && (avg<60)) {
     printf("Grade B");
     
    } else {
       printf("Grade C");
       
      }
  
}