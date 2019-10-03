#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Monday, September 16, 2019  */
/* Description: Program Description  */

int main() {
  
  int x,y;
  printf("Enter two numbers: \n");
  scanf("%d %d", &x, &y);
  if (x>y){
    //tab to code
   printf("%d is greater",x);
   
  } else {
   printf("%d is greater",y);
   
  }
  
  

  getch();
  return 0;
  
}