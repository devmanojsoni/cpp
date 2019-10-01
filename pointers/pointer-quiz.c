//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Tuesday, October 01, 2019  */
/* Description: Quiz on Pointers  */

int main() {
  
  /*Code here*/
  // Quiz 1
  int *p; double *q, x,y;
  x=sizeof(p);
  y=sizeof(q);
  printf("int *p = %d, double *q = %lf", x,y); // %lf is uesed for double
  //Output
  // int *p = 0, double *q = 0.000000
  // Therefore x=y

  printf("\n"); // new line
  // Q2 : if the size of int is 4 bytes and r is a pointer to an integer
  // then ++r will move rby _________ bytes
  int a=1;
  int *r;
  r=&a;
  printf("%d\n", r);
  ++r;
  printf("%d", r);
  // Answer: 4 bytes

  printf("\n"); // new line
  // Q3 on moving pointers
  int A[]={2,4,6,8,10,12};
  int *s=&A[3];
  printf("%d",s[-2]);
  // Answer: 4

  printf("\n"); // new line
  // Q3 on references, valid in C++, dont know why showing errors in C
  //   int x=10;
  //   int &y=x;
  //   y=x+y;
  //   printf("x = %d, y = %d", x, y);
  //   // Answer: x = 20, y = 20

  
  
  
  
  printf("\n"); // new line
  
  //Q4 : What is z?
  // int x=10;   
  // int *y=&x;   
  // int * &z=y; // reference to a pointer of int type
  
  // Opt: A - Integer Reference, B - Reference to a pointer of type int
  //          C - Integer Pointer,   d - Invalid

  // Answer- Reference to a pointer of int type

  // getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|