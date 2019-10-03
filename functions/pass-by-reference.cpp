//***************************************************************---C76-->|
#include <iostream>

/* Created by Manoj Soni on Thursday, October 03, 2019  */
/* Description: Parameter Passing Methods in C and C++  */

/*
 *********VVI********************
 cout is way better than printf. 
 Now, there is a difference - cout is C++, and printf is C 
 however, you can use it(printf) in C++, 
 just like almost anything else from C
 StackOverFlow Reference: https://tinyurl.com/prinfInC
*/

   // Call by Reference | ONLY SUPPORTED IN C++
   // Working is Explained in the Notebook and A4 Print*/
   
   // VVI: Observe the Memory Diagram, and see whether
   // the machine code of the external function is merged
   // inside the machine code of the main function code or not

// Example Pass By Reference or Call by Reference
// When should you use Pass by Reference?

// It is not advisable to use Call by Reference, bcoz it makes
// the machine code (m/c) monolithic, but yes, you can use it for smaller
// programs/functions, DO NOT use it for heavy functions which are having
// loops and all, or having complex logic

// Notice that there will be no separate stack frame for swap function,
// because it is call by reference and references don't take any memory
// and all the data manipulation performed inside the main function's 
// stack frame, and infact temp variable created inside the main function's
// stack frame because swap function didn't allocate it a separate space

void swap(int &x, int &y){ // Formal Parameters, Return type is void
  // Think it as &x=a, &y=b i.e, x is a reference to a, y is to b
  // References are alias, another name given to a variable
  // function swap calls a & b as x & y
  int temp;
  temp=x;
  x=y;
  y=temp;
}

int main() {
  
  int a,b;
  a=10;
  b=20;
  printf("Currently a,b are %d,%d respectively\n", a,b); //test the before value
  // using printf for simplicity, instead of COUT

  swap(a,b); // Actual Parameters
  printf("a,b are %d,%d respectively.OMG! How come they are swapped?", a,b);
  // Notice that Actual Parameters are modified even when we are not passing
  // the addresses of these variables to a function where pointer parameters
  // are ready to take these actual parameters
  printf("\nIn Pass by Reference, The external function's machine code get pasted inside the main function's\n"
  "machine code during runtime, therefore program becomes monolithic during runtime\n"
  "whereas the source code still remains modular/procedural");
  
  return 0;
}
