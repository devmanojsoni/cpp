#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Friday, September 20, 2019  */
/* Description: Display the digits of a number in reverse order | related to armstrong number */

    int main() {

    /*Code here*/
    int r, n=12213, rev=0;
    
    int m=n; // while loop will make n as 0, so keep it in some other variable
    // YOU HAVE TO PRESERVE THE ORIGINAL NUMBER IF YOU ARE USING ANY PARADIGM TO DEDUCE IT IN WHILE LOOP
    
    while (n>0) { // first condition check then process
        r=n%10;
        n=n/10; // THIS PARADIGM IS MAKING n AS 0, AND WE NEED TO COMPAREIT WITH SUM, SO n IS STORED IN m
        rev=rev*10+r;
        // It is working on the basis of "as long as n>0, if n becomes zero then stop!"

    }
    
    if (m==rev){
        printf("Reverse of %d is %d, therefore, it is a Palindrome\n",m,rev);
    } else {
        printf("Reverse of %d is NOT EQUAL TO %d, therefore, it is NOT A Palindrome\n",m,m);
    }
    
    
    //////////////////ab
    void palindrome(int);
    palindrome(n);
    //////////////////ab

    //tab to code
    //printf("It is an armstrong no. %d ",n);




    //getch();
    return 0;
}

void palindrome(int n) {
    printf("\nAbdul Bari:\n"); // to separate my code from abdul bari's code
    int rev=0;
    int r;
    int m=n;
    
    while(n>0) {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(rev==m) {
        printf("palindrome");
    } else {
        printf("not palindrome");
      }
}