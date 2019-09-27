//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Friday, September 27, 2019  */
/* Description: calloc: print value at each block  */

int main() {
  
  /*Code here*/
  int *p= (int*)calloc(5, sizeof(int));
  // assignment 
  p[0]=12;
  p[1]=13;
  p[2]=14;
  //p[3]=15; // must be 0 in case of calloc if not initialized
  //p[4]=16; // must be 0 in case of calloc if not initialized
  
  // print as if p is an array
  for(int i=0; i<5; ++i){
      printf("%d, ", p[i]);
  }
  
  free(p); // first free then null
  p=NULL;
  
  /*
  This order below will cause MEMORY LEAK PROBLEM, SO BE CAREFUL
  p=NULL;
  free(p);
  */

  getch();
  return 0;
}