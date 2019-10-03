#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    
    int age;
    printf("Enter age");
    scanf("%d", &age);
    if ( (age>=12 ) && ( age<=50 )){ // SHORTCUT- Compound if, else -->> cifel
      //tab to make changes
     printf("Young");
     
    } else {
     printf("NOT Young");
    }

    
    getch();
    return 0; // common practice in a main function you should write
}

