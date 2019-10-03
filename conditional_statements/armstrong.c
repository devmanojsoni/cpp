#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Friday, September 20, 2019  */
/* Description: Display the digits of a number in reverse order | related to armstrong number */

    int main() {

    /*Code here*/
    

    int r, n=154, sum=0;
    
    int m=n; // while loop will make n as 0, so keep it in some other variable
    // YOU HAVE TO PRESERVE THE ORIGINAL NUMBER IF YOU ARE USING ANY PARADIGM TO DEDUCE IT IN WHILE LOOP
    
    while (n>0) { // first condition check then process
        r=n%10;
        n=n/10; // tHIS PARADIGM IS MAKING n AS 0, AND WE NEED TO COMPAREIT WITH SUM, SO n IS STORED IN m
        r=r*r*r;
        sum=sum+r;
        // It is working on the basis of "as long as n>0, if n becomes zero then stop!"

    }
    if (sum==m){
        printf("%d: Sum of cubes the of the digits of this number is the number itself, therefore, %d is an Armstrong number \n",m,m);
    } else {
        printf("%d: Sum of the cubes of the digits of this number is NOT EQUAL TO THE NUMBER ITSELF, therefore, %d is NOT an Armstrong number \n",m,m);
      }
  
    //tab to code
    //printf("It is an armstrong no. %d ",n);


    /////////////////////// AB
    void armstrong(int);
    armstrong(153);
    /////////////////////// AB

    //getch();
    return 0;
}

void armstrong(int n) { //by abdul bari
    printf("\nAbdul Bari:\n"); // to separate my code from abdul bari's code
    int sum=0,r;
    int m=n;
    
    while(n>0) {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }
    
    if(sum==m) {
        printf("%d is armstrong\n",m);
    } else {
        printf("%d is not armstrong\n",m);
    }
}