#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float a, b, c;
    printf("Enter two numbers");
    scanf("%d %d", &a,&b);
    if (b==0){ // Again a validation, 
    // before dividing we are checking if the denominator is zero
      //tab to code
     printf("Division by Zero");
     
    } else {
     c=a/b;
     printf("Printing C:\n %f", c);
     
    }
    

    
    getch();
    return 0;
}
