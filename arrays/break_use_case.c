//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Monday, September 23, 2019  */
/* Description: Break -- Meaning get out of the code blocks, or loop  */
/* A program in C to read integers until user enters a negative number
or the input reaches til 15*/

// use case of break;

int main() {
  
  /*Intentionally indented like this*/
  int count=15, isNegative, PrintOnlyOnce=0;
  
  for (int i=0,n=20; i<n; i++) { // i=0 only initialized once
   
        if (PrintOnlyOnce==0){ // Print only one-time
        printf("READ INT\n");
        PrintOnlyOnce=1;
        }
                scanf("%d", &isNegative);
                count--;
        if ((count==0)||(isNegative<0)){
            //tab to code
            break;
        }
   
  }
  
  
  
  getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|