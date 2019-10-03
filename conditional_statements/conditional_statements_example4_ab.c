#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Tuesday, September 17, 2019  */
/* Description: Program Description  */

int main() {
 
 /*Code here*/
  
  eligible(4);// function call
  
  
  
  
  getch();
  return 0;
}
void eligible(int age) { // resembles--> returnType funcName(dataType1 x, dataType2 y)
  /*Code here*/
  
  if ( (age<12 ) || ( age>50 )){
    //tab to make changes
   printf("eligible");
  } else {
   printf("not eligible");
   
  }
}