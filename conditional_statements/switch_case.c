#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Wednesday, September 18, 2019  */
/* Description: Program Description  */

int main() {
 
 /*Code here*/
  
  int x=1;
  switch (x) {
   case 1: printf("One");
         //break; // If you don't give break here and even if the value of the expression is limited to 1
         //          it will go upto the next available break keyword where is it available
   case 2: printf("Two");
         break; 
   case 3: printf("Three");
         break;
   default: printf("Invalid Number"); // default block can be written anywhere,  top or bottom
         break;
  }
  // Conclusion : Switch cases are faster compared to if-else ladders
  // Switch cases are used in menu designs
  
  //getch();
  return 0;
}
