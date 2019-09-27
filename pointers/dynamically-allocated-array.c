//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Friday, September 27, 2019  */
/* Description: Dynamically Allocated Array using malloc   */

int main() {
  
  /*Code here*/
  int n;
  printf("Enter size of array\n");
  scanf("%d", &n);

  // dynamically allocated array
  int *A = (int*)malloc(n*sizeof(int));
  
  // fill in the array
  for(int i=0; i<n; ++i){
   A[i]=i+1;
  }

  // print the array
  printf("Your dynamically allocated array\n");
  for(int i=0; i<n; ++i){
      printf("%d, ", A[i]);
  }
  
  getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|