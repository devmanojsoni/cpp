#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Tuesday, September 17, 2019  */
/* Description: Program to show that you should never use an increment or decrement
operator in the second condition of a compound conditional statement  */

int main() {
  
  /*Code here*/
  int a=10, b=50, i=5;
  if ( (a>b ) && ( ++i<=b )){
    //tab to make changes
   
  }
  printf("Test i:\n %d",i);
  
  
  
  
  //getch(); //Comment out when using Code Play Button/Option
  return 0;
}