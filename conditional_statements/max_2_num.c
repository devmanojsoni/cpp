#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Monday, September 16, 2019  */
/* Description: Program Description  */

int main(){
    max(30,4);
    getchar(); // To pause the screen
}
void max(int x, int y) {
  
  if(x>y) {
        printf("%d is greater ",x);
  } else {
        printf("%d is greater ",y);
  }
  
}