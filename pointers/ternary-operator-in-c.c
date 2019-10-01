//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Tuesday, October 01, 2019  */
/* Description: Ternary Operator in C  */

int main() {
  
  /*Code here*/
  // Scenario I
  
  char result; 
  int marks=34;
  
  // Long code
  if (marks > 33){
    //tab to code
   result = 'p';
   printf("%c\n",result);
  } else {
   result = 'f';
   printf("%c\n",result);
  }
  
  // printf("%d", result); VVI: if you mistakenly provide "%d" in place
  // of "%c", then 'p' will be coverted to its integer equivalent
  // ASCII Code
  
  // Ternary operator syntax>> (condition) ? T:F;
  // boilerplate - tro
  // Short code
  result = (marks > 33) ? 'p':'f';
  printf("%c\n", result); // "I chose %c after a mistake, mistake noted above"

  // or even shorter, just in one line
  printf("%c\n", result = (marks > 33) ? 'p':'f');

  // or even more shorter, just in one line
  printf("%c\n", (marks > 33) ? 'p':'f');
  // Ternary operator syntax>> (condition) ? T:F;
  
  //getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|