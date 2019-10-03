//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Wednesday, October 02, 2019  */
/* Description: Functions Basics, See the Working in the Notebook  */

// Declaration and Definition/Ellaboration of a Function
// Add function will have its own memory space/its own activation record/
// or its own stack frame, where its variables will be allocated
int add(int a, int b){ // -- Signature or Prototype of a function
    /* Above parameters are the FORMAL parameters*/
    //--- Body Starts
    int c;
    c=a+b;
    return (c); // Returning the result as integer, thats why int in signature
    //--- Body Ends
    // Body of a function is called as Definition or Elloboration of a function
} // When the control exits the add function, its activation record gets deleted

// Main function/program will have its own activation record
int main() {
  
  int x,y,z;
  x=10;
  y=5;
  // passing the integers to add function
  z=add(x,y); // Calling the add function and storing the value to z
  /* Above parameters are called ACTUAL parameters*/
  printf("sum is %d",z);
  
  
  //getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|