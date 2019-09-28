//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Saturday, September 28, 2019  */
/* Description: Valid and Invalid Operations on Pointers  */

int main() {
  
  /*Code here*/
  printf("All operations on values are valid, e.g +,-,/,*,%(modulo)\n");
  printf("Valid operation on values -- *p1+*p2\n");
  printf("Valid operation on values -- *p1-*p2\n");
  printf("Valid operation on values -- *p1**p2 // p1 multiplied by p2\n");
  printf("Valid operation on values -- *p1/*p2 // maye give error, not appropriate\n");
  printf("Valid operation on values -- (*p1)/(*p2)\n");

  printf("\nFollowing operations are valid on addresses, inc, dec and pointer diffrence\n");
  printf("Valid operation on values -- d=p2-p1\n");
  printf("Valid operation on values -- p1++, p2++, p1=p1+2 (inc by 2), p2=p2+2 (inc by 2)\n");
  printf("Valid operation on values -- p1--, p2--, p1=p1-2 (dec by 2), p2=p2-2 (dec by 2)\n");
  printf("Valid operation on values -- p1*p2 -- INVALID\n");
  printf("Valid operation on values -- p1+p2 -- INVALID\n");
  printf("Valid operation on values -- p1/p2 -- INVALID\n");
  printf("Valid operation on values -- (p1)%(p2) -- INVALID\n");

  printf("\nIn short, Only Five operations are valid on addresses\n");
  printf("They are: 1. p++, 2. p--, 3. p=p+2, 4. p=p-2, 5. d=q-p\n");
  
  
  getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|