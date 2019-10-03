//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Sunday, September 22, 2019  */
/* Description: Program Description Max number in an array using for loop */

int main() {
  
  /*Code here*/
  int A[]={44,6,27,15,31,22,30,29,8,16};
  int max=A[0];
  
  // why we are not taking i from 0?
  // bcoz, max<A[0], meaning 4<4 will always be false
  // time complexity of the program?
  // we scanned the etire array upto index 9, therefore O(n)
  for (int i=1,n=10; i<n; i++) { // i=0 only initialized once
   if (max<A[i]){
    //tab to code
    max=A[i];
   }
   
  }
  // after scanning the entire loop come and say the max
  printf("Max is %d ",max);
  
  getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|