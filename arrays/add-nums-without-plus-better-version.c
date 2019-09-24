//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Tuesday, September 24, 2019  */
/* Description: Add two numbers without using + operator  */

int main() {
  
  /*Code here*/
  //int x = 5, y=4;
  int x,y;
  printf("Enter two no.s you wish to add without using + operator:");
  scanf("%d\n %d", &x, &y);
  
  if (y>0) {
    while (y!=0){
        x++;// eat 1 from y, until u squeeze it
        y--;
    }
  } else if (y<0){
      while (y!=0){
        x--;// eat 1 from y, until u squeeze it
        y++;
    }
  }

  if (y==0){
   //tab to code
   printf("%d",x);
  }
  
  
  
  getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|