//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Thursday, October 03, 2019  */
/* Description: Parameter Passing Methods in C and C++  */
   
// Working is Explained in the Notebook and A4 Print*/
// Observation : Swapping done in the main functions' activation record
// by the pointers of the swap function

// Example Pass By Addreess or Call by Address
// When should you use Pass by Address?
// When you wish to modify the values of the variables of the main function
// through some outsider functions or pointer

// Remember: One function cannot access the variables of another function directly,
// but it can accesss them indirectly using pointers

void swap(int *x, int *y){ // Pointers can take addresses
  // Think it as *x=&a; *y=&b;
  // The moment &a and &b are passed into the parameters
  // x & y started pointing to them
  
  int temp; // temp variable created inside swap functions' activation record
  // You can visualize this in your head by pointing x and y to a and b
  temp=*x; 
  *x=*y; 
  *y=temp;
  // Only temp is not a pointer
}

int main() {
  
  int a,b;
  a=10;
  b=20;
  printf("Currently a,b are %d,%d respectively\n", a,b); //test the before value
  
  swap(&a,&b); // Pass Addresses in the Actual Parameters
  printf("a,b are now %d,%d respectively.Are they swapped? YES!\n", a,b);
  // Notice that Actual Parameters are modified
  printf("Therefore, In Pass by Address, Actual Parameters are Modified, b'coz formal params are pointers to them\n");
  
  //getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|