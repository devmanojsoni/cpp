#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Tuesday, September 17, 2019  */
/* Description: Program to show In-Scope declaration is not possible in if statement in C  */

int main() {
  
  /*Code here*/
  
  // EXAMPLE 0
  int a=10,b=10;
  
  if (1){ // I think you can't use the "true" or "false" keyword here, bcoz of c language, but it's possible in c++
   //tab to code
   int j=a+b; // Oh!, this can also be done in C! OMG!
   printf("%d\n",j);
   
  }
  
  
  // EXAMPLE 1 - In-Scope declaration in conditional statements (If statements)
  if (int k=a+b; k>21){ // This can be done in C++ /NOT IN C
  //tab to code
   
  }

  // EXAMPLE 2 - In-Scope declaration in Iterative statements (For Loop)
  for (int i = 0, n = 10; i < n; i++) { // Seems it is possible in C
      /* code */
      printf("%d\n",i);
      
  }
  //getch();
  return 0;
}