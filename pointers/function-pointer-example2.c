//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Tuesday, October 01, 2019  */
/* Description: Function Pointer Example 2  */

int maxnum (int x, int y){
  // ternary operator or conditional operator, requires three operands
  return x>y?x:y;// return will also be an int, since both x & y are int
}

int minnum (int x, int y){
  // ternary operator or conditional operator, requires three operands
  return x<y?x:y;// return will also be an int, since both x & y are int
}

int main() {
  // declare the function pointer variable
  // ONE TIME DECLARATION FOR ALL SAME SIGNATURE FUNCTIONS
  int (*fp)(int,int); // signature same as the maxnum function
  // set function pointer variable to point to the function
  fp=maxnum;
  // ask the pointed pointer variable to call the maxnum
  // function on behalf of maxnum funtion itself
  (*fp)(10,5); // arguments passed, two integers
  // 10 is greter than 5, which func will be called?
  // -- max will be called

  int stored_max;
  stored_max = (*fp)(10,5); // function called and the result stored in a variable
  printf("%d\n", stored_max); // check what is being returned or the return type
  
  // Signature of both the functions are same,
  // So, in the next line can i say, set fp to point to minnum?
  // yes
  // now the same fp pointer is pointing to min function
  fp=minnum;
  (*fp)(10,5);// and now 5 will be printed
  
  
  int stored_min;
  stored_min = (*fp)(10,5); // function called and the result stored in a variable
  printf("%d\n", stored_min); // check what is being returned or the return type
  
  //getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|