#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Friday, September 20, 2019  */
/* Description: Display the digits of a number in reverse order | related to armstrong number */

int main() {
  
  /*Code here*/
    
    

    int r, n=5678; 
    while (n>0) { // first condition check then process
    r=n%10;
    n=n/10;
    printf("%d ",r); //Remember: Condition Check >> Process >> Update | CPU - SAME AS FOR LOOP
    //i++; //You can see no increment or decrement is needed here
    // It is working on the basis of "as long as n>0, if n becomes zero then stop!"
    }

    
    // abdul bari
    void digits(int);
    digits(1234);
    // abdul bari
  
  
  
  //getch();
  return 0;
}

void digits(int n) {
    printf("\nAbdul Bari:\n"); // to separate my code from abdul bari's code
    int digit;
    while(n>0) {
        digit=n%10;
        n=n/10;
        printf("%d ",digit);
    }
}