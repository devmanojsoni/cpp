//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Thursday, October 03, 2019  */
/* Description: Parameter Passing Methods in C and C++  */
/* Three methods- 1) Pass by Value, 2) Pass by Address 3) Pass by Reference
   Pass by Reference is Available in C++, NOT in C
   and these are also called as Call by Value, Call by Address and
   Call by Reference 
   
   Working is Explained in the Notebook and A4 Print*/

// Example Pass By Value or Call by Value
// When should you use Pass by Value?
// When you don't want to modify the actual params
// and just wanna play around to see some result
void swap(int x, int y){ // Formal Parameters, Return type is void
  int temp;
  temp=x;
  x=y;
  y=temp;
}

int main() {
  
  int a,b;
  a=10;
  b=20;
  swap(a,b); // Actual Parameters
  printf("a,b are %d,%d respectively.Are they really swapped?", a,b);
  // Notice that Actual Parameters are not modified
  printf("\nIn Pass by Value, Actual Parameters are NOT Modified");
  
  //getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|