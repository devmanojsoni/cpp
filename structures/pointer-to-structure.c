//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Wednesday, October 02, 2019  */
/* Description: Pointers to Structures : Static Memory Allocation  */
struct rectangle {
    int length;
    int breadth;
};

int main() {
  
  /*Code here*/
  /*
  // We know how to manipulate data with dot operator, now we should learn how
  // to do this using pointers or pointers to structures
  // and this is how we perform it using dot operators
  -----------------
  // We can call this, static memory allocation without pointers
  struct rectangle r = {10,5};
  r.length=15;
  r.breadth=50;
  -----------------
  */
  struct rectangle r = {10,5}; // Structure instance declaration and initialization
  printf ("struct rectangle r = {10,5};| initializes r.length to  %d\n", r.length);
  
  // pointer to a structure instance declaration
  // like for integer data types we used "int *p", i.e, <datatype>*<name-of-the-pointer>
  struct rectangle *p; // <struct><struct type>*<name of the pointer>
  p=&r; // set the pointer to point to the structure instance r
  // now the pointer p is pointing a structure instance 'r' in the memory

  // One liner
  // struct rectangle *p=&r;
  
  // Manipulate the data, this is not initialization, we have already initialized
  // it above i.e struct rectangle r = {10,5};
  (*p).length=20;
  printf ("(*p).length=20;| changes r.length to %d\n", r.length);
  // *p.length=20; // Note that  will cause error, 
  // bcoz dot operator has higher precedence so we enclose *p with brackets
  
  // Another way to write the same thing\
  p->length=80; // a hyphen '-' and a greater than sign makes an arrow, forward arrow
  printf ("p->length=80;| changes r.length to %d\n", r.length);
  
  //getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|