//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Tuesday, September 24, 2019  */
/* Description: Take input from user in a 2d matrix/array  */

int main() {
  
  /*Code here*/
  int A[2][3]={0};// if i leave it like int A[2][3]={}; , it gives error
  printf("enter 6 elements for your 2x3 matrix:\n");
  for (int i=0; i<2; i++) {
   for (int j=0; j<3; j++) {
       scanf("%d", &A[i][j]);
   }
  }
  
  printf("Your 2x3 matrix:\n");
  for (int i=0; i<2; i++) {
   for (int j=0; j<3; j++) {
       printf("%d ", A[i][j]);
   }
   printf("\n");
  }
  
  getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|