#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Friday, September 20, 2019  */
/* Description: Display the digits of a number in reverse order | related to armstrong number */

    int main() {

    /*Code here*/
    
    int r, n=153, rev=0;
    
    int m=n; // while loop will make n as 0, so keep it in some other variable
    // YOU HAVE TO PRESERVE THE ORIGINAL NUMBER IF YOU ARE USING ANY PARADIGM TO DEDUCE IT IN WHILE LOOP
    
    while (n>0) { // first condition check then process
        r=n%10;
        n=n/10; // THIS PARADIGM IS MAKING n AS 0, AND WE NEED TO COMPAREIT WITH SUM, SO n IS STORED IN m
        rev=rev*10+r;
        // It is working on the basis of "as long as n>0, if n becomes zero then stop!"

    }
    
    printf("Reverse of %d is %d\n",m,rev);
    
  
    //tab to code
    //printf("It is an armstrong no. %d ",n);

    /////////////ab
    void reverse(int);
    reverse(12345);
    ////////////////ab


    //getch();
    return 0;
}

void reverse(int n) {
    printf("\nAbdul Bari:\n"); // to separate my code from abdul bari's code
    int rev=0;
    int m=n;
    int r;
    
    //write loop for finding reverse of number and print it
    while (n>0) { // first condition check then process
        r=n%10;
        n=n/10; // THIS PARADIGM IS MAKING n AS 0, AND WE NEED TO COMPAREIT WITH SUM, SO n IS STORED IN m
        rev=rev*10+r;
        // It is working on the basis of "as long as n>0, if n becomes zero then stop!"

    }
    printf("%d\n",rev);
    
}