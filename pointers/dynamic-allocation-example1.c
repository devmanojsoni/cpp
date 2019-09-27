//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Friday, September 27, 2019  */
/* Description: malloc: print value at each block  */

int main() {
  
  /*Code here*/
  int *p= (int*)malloc(5 * sizeof(int));
  // assignment 
  p[0]=12;
  p[1]=13;
  p[2]=14;
  //p[3]=15; // must be a GARBAGE VALUE in case of malloc if not initialized
  //p[4]=16; // must be a GARBAGE VALUE in case of malloc if not initialized
  
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












//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|
/*
What is the problem with the code?
#include<stdio.h> 
int main() 
{ 
    int *p = (int *)malloc(sizeof(int)); 
  
    p = NULL; 
  
    free(p); 
} 
(A) Compiler Error: free can’t be applied on NULL pointer
(B) Memory Leak
(C) Dangling Pointer
(D) The program may crash as free() is called for NULL pointer.

Answer: (B) 

Explanation: free() can be called for NULL pointer, so no problem with free function call.

The problem is memory leak, p is allocated some memory which is not freed, but the pointer is assigned as NULL. The correct sequence should be following:

    free(p);
    p = NULL;

*/