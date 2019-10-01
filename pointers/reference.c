//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Tuesday, October 01, 2019  */
/* Description: Reference in C/C++  */

int main() {
  
  /*Code here*/
  // NOT A VALID PROGRAM, JUST FOR UNDERSTANDING PURPOSES
  // DON'T KNOW WHY NOT WORKING IN C, BUT MUST WORK IN C++
  int x = 10;
  printf("%d Value of x is",x);

  int &y; // you can't just declare a refernce, it an error
  // you'll have to declare and initialize it atomically/together like below
  
  // a refernce must be initialized when it is declared
  int &y=x; // not valid here in c, but it means just another
  // name for x
  x++; // x=11
  printf("%d Value of x after x++ is",x);
  y++; // x =12
  printf("%d Value of x after y++ is",x);
  printf("%d Value of y after y++ is",y);

  /*
  // r-value and l- vaue
  a=x; // r-value: whatever in in x, will get stored in a
  x=25; // l-value: x will be replaced by some other value

  /////////
  &y=x;
  &y=a;
  // not possible within the same program
  /////////
  */


  
  
  //getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|