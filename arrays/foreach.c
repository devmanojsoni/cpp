#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//C doesn't have a foreach, but macros are frequently used to emulate that:
// Iteration over an array is also possible:
#include <foreach.h> // This file is created by me, Reference: https://stackoverflow.com/questions/400951/does-c-have-a-foreach-loop-construct

// C++ foreach: Introduced in C++ 11
// int B[6] = {2,6,1,5,6,7};
// for(int x:B) // say for each element in array B
//    cout<<x<<endl;

/* Created by Manoj Soni on Friday, September 20, 2019  */
/* Description: Program Description  */

int main() {
  
  /*Code here*/
  
  int A[5]={1,2,3,4,5};
  //set the data-type according to the array
 
  foreach(float *v, A) { // for each element v in array A, display or print the element
     printf("%f, ", *v); // v is the copy of the element, not the element itself
     // in case if the data-type of both loop and array is FLOAT
     // replacing %f with %d can give unwanted errors, float values become garbage and integers become zero
     // replacing %f with %c can cause errors or may not show anything
  }
    
  
  
  
  //getch();
  return 0;
}