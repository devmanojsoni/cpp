//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Saturday, September 28, 2019  */
/* Dangling Pointers: when a deleted pointer is being called   */

int main() {
  /*Code here*/
  int *A = (int *)malloc(5*sizeof(int));
  // A is pinting to an array of 5 integers
  A[0]=0, A[1]=1, A[2]=2, A[3]=3, A[4]=4; // or 0 of A i.e 0[A]
  printf("%d\n", A[0]);
  //----------------------------------
  // A--->> |  0 |  1 |   2|  3 |  4 |
  //----------------------------------
  // A is pointing to an array of 5 integers
  

  // call the function to mimic dangling pointer scenario
  // declare it first
  void func(int*); // SAME AS FUNCTION SIGNATURE
  func(A); // 
  printf("%d\n", *A); // must cause dangling pointer error
  
  getch();
  return 0;
}
void func(int *q){
  // When A is passed to q,
  // this happens -->> *q = &(*A);
  //
  free(q);
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|