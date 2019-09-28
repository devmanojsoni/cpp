//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Saturday, September 28, 2019  */
/* Description: Other way of writing pointers  */

int main() {
  
  /*Code here*/
  int A[5]={2,4,6,8,10};
  int *p=A; // pointer p is pointing to the array
  printf("//Observation 1:\n");
  printf("A[i]:\n");
  for(int i=0; i<5; ++i){
      printf("%d,", A[i]);
  }
  printf("\ni[A]:\n");
  for(int i=0; i<5; ++i){
      printf("%d,", i[A]);
  }
  printf("\nTherefore A[i] is same as i[A], say A of i is same as i of A:\n");
  
  printf("\n//Observation 2:\n");
  printf("*(A+i):\n");
  for(int i=0; i<5; ++i){
      printf("%d,", *(A+i));
  }
  printf("\n*(p+i):\n");
  for(int i=0; i<5; ++i){
      printf("%d,", *(p+i));
  }
  printf("\nTherefore A[i], i[A], *(A+i), *(p+i) are all SAME THING and GIVES VALUES:\n");
  
  printf("\n//Observation 3:\n");
  printf("A+i:\n");
  for(int i=0; i<5; ++i){
      printf("%d,", (A+i));
  }
  printf("\np+i:\n");
  for(int i=0; i<5; ++i){
      printf("%d,", (p+i));
  }
  printf("\nTherefore A+i, p+i are all SAME THING and GIVES ADDRESSES:\n");
  
  //getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|