#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    Sign(105);
    
    getch();
}

void Sign(int n)
{
    
    //write conditional statement here to print "positive" or "negatuve"
    if (n>=0){
     //tab to code
     printf("Number is Positive and it is:\n %d", n);
    } else {
     printf("Number is Negative and it is:\n %d", n);
    }
    
}