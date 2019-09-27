//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h> // Required for malloc(), calloc(), realloc() & free();

/* Created by Manoj Soni on Friday, September 27, 2019  */
/* Description: Dynamic Memory Allocation - calloc()  */
int main() {
  
  int* p, pc; // int* p; this is also true, but when you declare more than one
  // integer pointer, use this

  // ask user for no. of elements
  int n;// i; //sum=0;
  printf("Enter no of elements:\n");
  scanf("%d", &n);
  // Dynamically allocate memory using malloc() and calloc()
  
  p = (int*) malloc (n * sizeof(int)); // Inside the heap memory
  pc = (int*) calloc (n,sizeof(int)); // Inside the heap memory
  
  // Check if the memory has been successfully
  // allocated by malloc and/or calloc or not
  if (p == NULL || pc == NULL){
    //tab to code
   printf("Memory not allocated.\n");
   exit(0); // exit the program afteer displaying that
  } else {
       // Memory has been successfully allocated 
        printf("Memory successfully allocated using malloc.\n"); 
  
        // Free the memory 
        free(p); 
        printf("Malloc Memory successfully freed.\n"); 
  
        // Memory has been successfully allocated 
        printf("\nMemory successfully allocated using calloc.\n"); 
  
        // Free the memory 
        free(pc); 
        printf("Calloc Memory successfully freed.\n"); 
       
  }
  getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|