//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Monday, September 23, 2019  */
/* Description: Understanding Nested for Loops  */

int main() {
  
  /*Code here*/
  int count=1;
  for (int i=0; i<4; i++) { // i=0 only initialized once
   for (int j=0; j<4; j++) { // i=0 only initialized once
    printf("%d ",count++);
   }
   printf("\n");
  }
  
  
  
  //getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|