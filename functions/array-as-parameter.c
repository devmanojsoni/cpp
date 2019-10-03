//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Thursday, October 03, 2019  */
/* Description: Passing array as parameter  */

void fun(int A[], int n){ // notice the array inside the parameter
  // an uninitialized no-size array like A[], inside the parameters resembles
  // pointer to an array
  // Instead of "int A[]" we can also write *A
  // Difference between A[] and *A inside the parameter of a function is:
  // A[] can only point to an array whereas *A can point to any primitive types
  // or arrays or anything
  int i;
  for (i=0; i<n; ++i) { // i=0 only initialized once
   printf("%d",i[A]); // after init --> CPU 1: Condition check, 2: Process statements, 3:Update
   
  }
}

int main() {
  
  /*Code here*/
  int A[5]={2,4,6,8,10};
  void fun(int [], int); // Declare the function
  
  // void fun(int *, int); // This is also true, since [] resembles a pointer
  // by the original function's signature

  // void fun(int A[], int); // This is also NOT CAUSING ANY ERRORS
  // but you should avoid using this way, and this A, is not the above A

  
  fun(A,5);
  
  
  //getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|