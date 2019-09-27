//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h> // Required for Malloc();

/* Created by Manoj Soni on Friday, September 27, 2019  */
/* Description: Dynamic Memory Allocation - realloc()  */
int main() {
  
  int *p; // int* p; this is also true, but when you declare more than one
  // integer pointer, use this

  // ask user for no. of elements
  int n;// i; //sum=0;
  printf("Enter no of elements:\n");
  scanf("%d", &n);
  
  p = (int*) calloc (n, sizeof(int)); // Inside the heap memory
  // calloc() allocates the memory and also initializes & allocates 
  // memory block to zero. 
  // If we try to access the content of these blocks then we’ll get 0.

  // Check if the memory has been successfully
  // allocated by calloc or not
  if (p == NULL){
    //tab to code
   printf("Memory not allocated.\n");
   exit(0); // exit the program afteer displaying that
  } else {
       printf("Memory allocated successfully.\n");
       
       // get the elements of the array
       for (int i=0; i<n; ++i) { 
        p[i]= i+1; 
       }
       // Print the elements of the array
       printf("The elements of the previously allocated array are: ");
       for (int i=0; i<n; ++i) { // i=0 only initialized once 
        printf("%d, ", p[i]); 
       }

       // Get the new size for the array 
        int new_size; 
        printf("\n\nEnter the new size for the previously allocated array:"); 
        scanf("%d", &new_size);
        // Dynamically re-allocate memory using realloc() 
        p = realloc(p, new_size * sizeof(int)); 
  
        // Memory has been successfully allocated 
        printf("Memory successfully re-allocated using realloc.\n");
        
  
        // Get the new elements of the new array 
        for (int i = 0; i < new_size; ++i) { 
            p[i] = i + 1; 
        } 
  
        // Print the elements of the new array 
        printf("The elements of the new array are: "); 
        for (int i = 0; i < new_size; ++i) { 
            printf("%d, ", p[i]); 
        } 
  
        free(p); 


  }
  getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|