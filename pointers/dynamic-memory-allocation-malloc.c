//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h> // Required for Malloc();

/* Created by Manoj Soni on Friday, September 27, 2019  */
/* Description: Dynamic Memory Allocation - Malloc()  */
int main() {
  
  int *p; // int* p; this is also true, but when you declare more than one
  // integer pointer, use this

  // ask user for no. of elements
  int n;// i; //sum=0;
  printf("Enter no of elements:\n");
  scanf("%d", &n);
  // Dynamically allocate memory using malloc()
  // Syntax: (byte-size) --> X multiplied by the sizeof(data-type)
  // Syntax: malloc --> ptr = (cast-type*) malloc (byte-size)
  p = (int*) malloc (n * sizeof(int)); // inside the heap memory
  // malloc() doesn’t initialize the allocated memory. 
  // If we try to acess the content of memory block then we’ll get garbage values.
  
  // Check if the memory has been successfully
  // allocated by malloc or not
  if (p == NULL){
    //tab to code
   printf("Memory not allocated.\n");
   exit(0); // exit the program afteer displaying that
  } else {
       printf("Memory allocated successfully.\n");
       
       // get the elements of the array
       // ++i is faster
       for (int i=0; i<n; ++i) { // i=0 only initialized once
        p[i]= i+1; // after init --> CPU 1: Condition check, 
        // 2: Process statements, 3:Update
        
       }
       
       // Print the elements of the array
       // ++i is faster
       printf("The elements of the array are: ");
       for (int i=0; i<n; ++i) { // i=0 only initialized once 
        printf("%d, ", p[i]); 
        
       }
  }
  getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|