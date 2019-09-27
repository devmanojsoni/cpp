//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Thursday, September 26, 2019  */
/* Description: Pointer Declaration, Initialization & Deferencing  */
int main() {
  /*Code here*/
  
  int x=10; // before pointer declaration
  int *p; // pointer declaration
  p=&x; // pointer initialization
  printf("%d", *p); // pointer dereferencing
  
  printf("\nAnother way\n");

  int y=20;
  int *p1=&y; // pointer declaration & initialization
  printf("%d",*p1); // pointer dereferencing
  
  printf("\nAnother way and better for boilerplate\n");
  int z=100, *p2=&z; // integer + pointer declaration & initialization
  printf("%d",*p2);
  
  

  //getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|