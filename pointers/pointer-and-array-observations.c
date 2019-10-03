//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Saturday, September 28, 2019  */
/* Description: Pointer and Array Observations  */

int main() {
  
  /*Code here*/
  int A[5]={2,4,6,8,10};
  // in C++,  int A[5]{2,4,6,8,10}; is also valid
  int *p=A;
  printf("int A[5]={2,4,6,8,10};\n");
  printf("int *p=A;\n");
  printf("%d --Address of the Array A\n", &A);
  printf("&A --returns address of the Array\n");
  printf("%d --Address of the pointer varible\n", &p);
  printf("&p --returns the address of the pointer variable\n");
  printf("p = %d, &p[0] = %d\n", p, &p[0]);
  printf("p --returns the address of the zeroth index\n\n");
  
  printf("-----------Dereferencing Section Starts---------------------\n");
  printf("*p = %d, *A = %d\n\n", *p, *A);

  printf("*(A+i) and *(p+i) are all same thing and gives VALUES at indices of an array\n");
  printf("*(p+0) = %d, *(A+0) = %d\n", *(p+0), *(A+0));
  printf("*(p+1) = %d, *(A+1) = %d\n", *(p+1), *(A+1));
  printf("*(p+2) = %d, *(A+2) = %d\n", *(p+2), *(A+2));
  printf("*(p+3) = %d, *(A+3) = %d\n", *(p+3), *(A+3));
  printf("*(p+4) = %d, *(A+4) = %d\n\n", *(p+4), *(A+4));
  printf("-----------Dereferencing Section Ends---------------------\n\n");

  printf("-----------Address Section Starts---------------------\n");
  printf("p = %d, A = %d\n\n", p, A);

  printf("(A+i) and (p+i) are all same thing and gives ADDRESS at indices of an array\n");
  printf("(p+0) = %d, (A+0) = %d\n", (p+0), (A+0));
  printf("(p+1) = %d, (A+1) = %d\n", (p+1), (A+1));
  printf("(p+2) = %d, (A+2) = %d\n", (p+2), (A+2));
  printf("(p+3) = %d, (A+3) = %d\n", (p+3), (A+3));
  printf("(p+4) = %d, (A+4) = %d\n\n", (p+4), (A+4));
  printf("-----------Address Section Ends---------------------\n\n");
  
  printf("A[i], i[A], p[i], i[p] are all same thing and gives VALUES at indices of an array\n");
  printf("A[0] = %d, 0[A] = %d, p[0] = %d, 0[p] = %d\n", A[0], 0[A], p[0], 0[p]);
  printf("A[1] = %d, 1[A] = %d, p[1] = %d, 1[p] = %d\n", A[1], 1[A], p[1], 1[p]);
  printf("A[2] = %d, 2[A] = %d, p[2] = %d, 2[p] = %d\n", A[2], 2[A], p[2], 2[p]);
  printf("A[3] = %d, 3[A] = %d, p[3] = %d, 3[p] = %d\n", A[3], 3[A], p[3], 3[p]);
  printf("A[4] = %d, 4[A] = %d, p[4] = %d, 4[p] = %d\n\n", A[4], 4[A], p[4], 4[p]);
  
  printf("p[i] returns value at i th index, whereas &p[i] returns address at that index\n");
  printf("p[0] = %d, &p[0] = %d\n", p[0], &p[0]);
  printf("p[1] = %d, &p[1] = %d\n", p[1], &p[1]);
  printf("p[2] = %d, &p[2] = %d\n", p[2], &p[2]);
  printf("p[3] = %d, &p[3] = %d\n", p[3], &p[3]);
  printf("p[4] = %d, &p[4] = %d\n\n", p[4], &p[4]);
  
  
  
  //getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|