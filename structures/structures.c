//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Tuesday, October 01, 2019  */
/* Description: Understanding Structures  */

// Implement a custom structure first
struct rectangle {
    int length;
    int breadth;
    // int length, breadth; // this would have also true
}; // this semicolon is required after closing brackets in structures

int main() {
  
  /*Code here*/
  // declare the instance of your custom data type
  // declare one instance of rectangle
  // declaration part
  struct rectangle r;
  
  // declaration + initialization part
  // struct rectangle r = {10,5}; // length is declared first, so 10 will
  // be assigned to length, 5 to breadth

  // Other way to init/access the data members
  r.length=10;
  r.breadth=5;
  printf("%d", r.length*r.breadth);
  
  
  //getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|