//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Saturday, September 28, 2019  */
/* Problem using pointers: Memory Leak  */

int main() {
  
  /*Code here*/
  // Memory Leak: Pointers and Heap
  
  // uncomment as per use and check
  
  //void checkFreeOnly(void);
  //checkFreeOnly();

  //void checkNULLOnly(void);
  //checkNULLOnly(); // This will cause memory leak

  //void checkNULLbeforeFree(void);
  //checkNULLbeforeFree(); // This will cause memory leak

  void checkFirstFreeThenNULL(void);
  checkFirstFreeThenNULL();// This is the correct order
  //// use FIRST FREE THEN NULL TO AVOID MEMORY LEAK


  getch();
  return 0;
}

void checkFreeOnly(){
  // Case I
  int *A = (int*)malloc(5*sizeof(int)); // creates an array in the heap memory
  //int *p=A; // pointing to A
  // fill in
  for(int i=0; i<5;++i){
      A[i]=i+1;
  }
  //print
  printf("\n Your Array A is: \n");
  for(int i=0; i<5;i++){
      printf("%d, ", A[i]);
  }
  free(A); // check what does this free actually do
  printf("\n FreeOnly is NOT MEMORY LEAK, YOU JUST FREED IT\n");
  //printf("\n Pointer is still pointing to A\n");
  for(int i=0; i<5;i++){
      printf("%d, ", A[i]);
  }
  //return 0;
}
void checkNULLOnly(){
 // Case II:
  // again fill in
  int *A = (int*)malloc(5*sizeof(int)); // creates an array in the heap memory
  //int *p=A; // pointing to A
  
  for(int i=0; i<5;++i){
      A[i]=i+1;
  }
  //and then print
  printf("\n Your Array A is: \n");
  for(int i=0; i<5;i++){
      printf("%d, ", A[i]);
  }
  A=NULL; // can i set only null and don't free?
  // NO - THIS WILL CAUSE MEMORY LEAK
  //free(A);
  printf("\n NULLOnly IS MEMORY LEAK is: \n");
  for(int i=0; i<5;i++){
      printf("%d, ", A[i]);
  }
  //return 0;
}
void checkNULLbeforeFree(){
 // Case III:
  // again fill in
  int *A = (int*)malloc(5*sizeof(int)); // creates an array in the heap memory
  //int *p=A; // pointing to A
  
  for(int i=0; i<5;++i){
      A[i]=i+1;
  }
  //and then print
  printf("\n Your Array A is: \n");
  for(int i=0; i<5;i++){
      printf("%d, ", A[i]);
  }
  A=NULL; // can i set only null and don't free?
  // NO - THIS WILL CAUSE MEMORY LEAK
  free(A);
  printf("\n NULLbeforeFree IS MEMORY LEAK.\n");
  for(int i=0; i<5;i++){
      printf("%d, ", A[i]);
  }
  //return 0;
}
void checkFirstFreeThenNULL(){
 // Case IV:
  // again fill in
  int *A = (int*)malloc(5*sizeof(int)); // creates an array in the heap memory
  //int *p=A; // pointing to A
  
  //fill in
  for(int i=0; i<5;++i){
      A[i]=i+1;
  }
  //and then print
  printf("\n Your Array A is: \n");
  for(int i=0; i<5;i++){
      printf("%d, ", A[i]);
  }
  
  // FIRST FREE THEN NULL IS THE CORRECT ORDER
  free(A); // FIRST FREE
  A=NULL; // THEN NULL
  //delete[]A; in C++ instead of free(A);
  
  printf("\n FirstFreeThenNULL IS the way to avoid MEMORY LEAK. \n");
  printf("Now, you must not use A, if you'll use you'll get error\n");
  printf("Conclusion: you must delete the memory allocated to A\n");
  printf("before making it a NULL pointer or when you are not using it\n");
}
//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|