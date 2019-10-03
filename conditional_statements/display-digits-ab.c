#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Friday, September 20, 2019  */
/* Description: Display Digits by Abdul Bari  */

int main() {
  
  /*Code here*/
  
  void digits(int);
  digits(1234);
  
  
  //getch();
  return 0;
}

void digits(int n)
{
    int digit;
    
    while(n>0)
    {
        digit=n%10;
        n=n/10;
        printf("%d ",digit);
    }
}

