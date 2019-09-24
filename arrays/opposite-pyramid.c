//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Tuesday, September 24, 2019  */
/* Description: Best Logic - Pyramid Pattern  */

int main() {
  
  /*Code here*/
  int n;
  
  printf("Enter no. of rows you want");
  scanf("%d", &n);

  for (int i=1; i<=n; i++) {
   // 1st loop's body;
    for (int j=1; j<=2*n-1; j++) {
        if ( (j>=n-(n-i) ) && ( j<=n+(n-i) )){ // PRINTING STARS FROM n-(n-i) to n+(n-i)
        //[ I am tasting stars from n-(n-i) to n+(n-i) ]
            
            printf("*");
            //print  different symbols in odd and even places
            /* if(j%2==0){ 
                 printf("#");
             } else {
                 printf("*");
             }*/
        } else {
        printf(" ");
        }
    }
   printf("\n");// inner loop out, 1st loop's body;
  }
  getch();
  return 0;
}

/*Output if n=10 */
  /*
         *         
        ***        
       *****       
      *******      
     *********     
    ***********    
   *************   
  ***************  
 ***************** 
*******************

*/
//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|