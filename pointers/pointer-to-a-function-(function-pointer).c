//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Tuesday, October 01, 2019  */
/* Description: Pointer to a function  */

void display(){ // return type is void, name is display and there are no parameters
    printf("Hello World!"); // this will be excuted if the function will be called
}

int main() {
  
  /*Code here*/
  void (*fp) (); // function pointer declaration, signature same as display
  fp=display; // initialization, set fp variable to point to display func
  (*fp)(); // ask the pointed pointer to call the display function
  
  
  
  //getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|