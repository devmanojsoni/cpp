//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Monday, September 23, 2019  */
/* Description: Observation: continue above the inc/dec makes the loop infinite  */

int main() {
  
  // Continue do-while loop observation
  int i =0, n=10;
  
  do { // first process then condition check & hence executes atleat 1 time
   printf("DoUpBlock\n"); //statement(s), NOT CPU, but PU/C or UP/C
   //continue; // Observation: continue above the inc/dec making the loop infinite
   i++; //updatation
   
   printf("DoDownBlock\n");
   continue; 
  } while (i<n); //condition
  
  while (i<n) { // first condition check then process
   printf("WhileUpBlock"); //Remember: Condition Check >> Process >> Update | CPU - SAME AS FOR LOOP
   //continue; // Observation: continue above the inc/dec making the loop infinite
   i++; //updatation
   
   printf("WhileDownBlock\n");
   continue;
  }
  
  getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|