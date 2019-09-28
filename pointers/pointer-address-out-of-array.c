//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Saturday, September 28, 2019  */
/* Description: Pointer Address Out of Array  */

int main() {
  
  /*Code here*/
  int A[5]={2,4,6,8,10};
  // in C++,  int A[5]{2,4,6,8,10}; is also valid
  int *p=A;
  printf("%d --Address of the pointer varible\n", &p);
  printf("NB: &p -- returns the address of the pointer variable\n");
  printf("p = %d, &p[0] = %d\n", p, &p[0]);
  printf("NB: p -- p returns the address of the zeroth index\n");
  printf("p[1] = %d, &p[1] = %d\n", p[1], &p[1]);
  printf("NB: p[i] returns value at i th index, whereas &p[i] returns address at that index\n");
  printf("p[2] = %d, &p[2] = %d\n", p[2], &p[2]);
  printf("p[3] = %d, &p[3] = %d\n", p[3], &p[3]);
  printf("p[4] = %d, &p[4] = %d\n", p[4], &p[4]);
  printf("p[5] = GARBAGE VALUE = %d, &p[5] = ADDRESS OF 6th Index = %d\n", p[5], &p[5]);
  //printf("p[5] = GARBAGE VALUE = %d, &p[6] = ADDRESS OF 6th Index = %d\n", p[6], &p[6]);
  
  
  printf("Checking via the loop\n");
  printf("p = %d\n", p);
  printf("NB: p -- p returns the address of the zeroth index\n");
  for(int i=0;i<5;++i){
      printf("%d\n", *p);
      p++;
  }
  printf("p = %d\n", p);
  //printf("&p[5] = %d\n", &p[5]);
  //printf("&p[6] = %d\n", &p[6]);
  printf("p is now returning the address of the 6th index, instead of returning the address of the zeroth index\n");
  printf("you can see, p (which was equal to &p[0]) has now become equal to &p[5]\n");
  printf("So, we say,'Pointer has gone out of the array'\n");
  
  
  //getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|