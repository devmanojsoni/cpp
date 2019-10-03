#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Tuesday, September 17, 2019  */
/* Description: Program Description  */

int main() {
  
  /*Code here*/
  float a, b, c, d, r1, r2;
  printf("Enter a,b,c");
  scanf("%f %f %f", &a, &b, &c);
  d=(b*b)-4*a*c;
  
  if (d==0) {
     r1 = -b/(2*a);
   printf("%0.2f , real and equal roots", r1);
    
  } else if (d>0) {
     r1= (-b+sqrt(d))/(2*a);
     r2= (-b-sqrt(d))/(2*a);
     printf("%0.2f and %0.2f, real and unequal", r1,r2);
     
    } else {
       printf("d<0, imaginary roots");
       
      }
  
  
  getch();
  return 0;
}