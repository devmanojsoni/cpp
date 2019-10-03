#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int roll;
    printf("Enter your roll number");
    scanf("%d", &roll);
    
    if (roll<1){
      //tab to code
     printf("Invalid Roll no.");

    } else {
     printf("Valid Roll no.");
     
    }
    

    
    getch();
    return 0;
}
