//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Monday, September 23, 2019  */
/* Description: Understanding Nested for Loops  */

int main() {
  
  /*Code here*/
  printf("when j<=i\n");
  // | T(n) = O(n^2)  or O(4^2)
  for (int i=0; i<4; i++) { // i=0 only initialized once | T(n) = O(n) 
   for (int j=0; j<4; j++) { // j=0 only initialized once | T(n) = O(n) 
    if (j<=i){
     //tab to code
     printf("*");
    } // here giving spaces is not required
    //   it already gives an illusion of having spaces
   }
   printf("\n");
  }
  
  printf("when j>=i\n");
  
  // | T(n) = O(n^2)  or O(4^2)
  for (int i=0; i<4; i++) { // i=0 only initialized once | T(n) = O(n) 
   for (int j=0; j<4; j++) { // j=0 only initialized once | T(n) = O(n) 
    if (j>=i){
     //tab to code
     printf("*");
    } else {
     printf(" ");// you must provide spaces to get the illusion of a matrix
     // or else it will start with a new line, truncating the other indices
     // of the matrix
    }
   }
   printf("\n");
  }

  printf("when (i+j)>=3\n");
  
  // | T(n) = O(n^2)  or O(4^2)
  for (int i=0; i<4; i++) { // i=0 only initialized once | T(n) = O(n) 
   for (int j=0; j<4; j++) { // j=0 only initialized once | T(n) = O(n) 
    if ((i+j)>=3){
     //tab to code
     printf("*");
    } else {
     printf(" ");
    }
   }
   printf("\n");
  }
  
  
  //getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|