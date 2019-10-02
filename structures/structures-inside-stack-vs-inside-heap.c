//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Wednesday, October 02, 2019  */
/* Description: Pointer to structures: Dynamic Memory Allocation */
struct rectangle {
    int length;
    int breadth;
};

int main() {
  
  /*Code here*/
  struct rectangle *p; // pointer to a structure instance of type rectangle
  p = (struct rectangle*) malloc (sizeof(struct rectangle)); // created and pointed simultaneuosly
  // p above can only be a pointer
  printf("p = (struct rectangle*) malloc (sizeof(struct rectangle));| Memory created and pointer pointed to it simultaneously\n");
  
  p->length=10; // style 1
  (*p).breadth=5; // style 2
  printf("p->length and (*p).breadth says %d and %d from HEAP MEMORY respectively\n", p->length, (*p).breadth);
  /*
  //--------------------------------------------------------------------------------
  // if you think that you can do the below, you are wrong!!
  struct rectangle r; // the moment you say this, variable created the stack
  // and no other variable other than pointer variable can point to anything
  // inside the heap
  r = (struct rectangle*) malloc (sizeof(struct rectangle)); // this isn't iside heap
  struct rectangle *p; // so there this doesn't make sense
  p=&r; // and this also doesnt makes sense
  //--------------------------------------------------------------------------------
  */
  
  //getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|