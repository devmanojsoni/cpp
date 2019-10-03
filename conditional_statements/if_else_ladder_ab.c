#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Tuesday, September 17, 2019  */
/* Description: Program Description  */

int main() {
 
 /*Code here*/
  
  dayName(8);// function call
  
  
  
  
  getch();
  return 0;
}
void dayName(int day) { // resembles--> returnType funcName(dataType1 x, dataType2 y)
  /*Code here*/
  
  // sample use-case
  if (day==1){
   //tab to code
   printf("Monday");
    
  } else if (day==2) {
     printf("Tuesday");

    } else if (day==3) {
       printf("Wednesday");
       
      } else if (day==4) {
         printf("Thursday");
         
        } else if (day==5) {
           printf("Friday");
           
          } else if (day==6) {
             printf("Saturday");
             
            } else if (day==7) {
               printf("Sunday");

              } else {
                printf("Please enter a number between 1 to 7");
                
               }
}