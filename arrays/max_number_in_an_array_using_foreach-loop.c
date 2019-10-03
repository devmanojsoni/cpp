//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <foreach.h>
/* Description: Program Description Max number in an array 
using foreach loop */
int main() {
  
  /*Code here*/
  // you can use foreach loop here
  // size of this array is intentionally uninitialized 
  // so that you can think of using foreach loop
  int A[]={44,6,27,15,31,22,30,29,8,16};
  int max=A[0];
  
  // Note that this foreach loop doesn't exists in C language
  // I have implemented it
  foreach(int *v, A) { // for each element v in array A, 
  // display or print the element
     // printf("%d, ", *v); // v is the copy of the element
     // not the element itself
     if (max<A[*v]){ // if max (which is set to A[0]), is less than
      // any element in Array A while scanning the array, then set that
      // element to max, because that element is greater

      // in other words:
      // while scanning if any element (*v) found to be greater than max
      // then set or assign that element to max
      max=A[*v];
     }

     /* In C++, this would be
     ************************
        for(int x:A) {
            if (x>max) {
            max=x;
            }
        }
     *************************
     */
  }
  
  // after scanning the entire loop come and say the max
  printf("Max is %d ",max);
  
  getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|