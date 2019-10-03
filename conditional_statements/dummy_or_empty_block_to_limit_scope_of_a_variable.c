#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Tuesday, September 17, 2019  */
/* Description: Program to show LIMITING THE SCOPE OF A VARIABLE BY ADDING DUMMY BRACKETS  */

int main() {
  
  /*Code here*/
  
  
  int a=10,b=5;
  
  { // Dummy Paranthesis to limit the scope of "c" varible, it could have also done by declaring inside the if statement, if it were C++
    int c=a+b; // Limit this C to this IF BLOCK ONLY, JUST PUT AN EMPTY OR DUMMY BLOCK/PARANTHESIS
    if (c>10){

    }
  }
  printf("%d",c); // as you can see, "c" is in the scope of the above dummy brackets only, 
  //or you can say it is limited for use that if statement only
  
  
  
  
  //getch();
  return 0;
}