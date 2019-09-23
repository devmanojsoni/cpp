//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Tuesday, September 24, 2019  */
/* Description: Best Logic - Pyramid Pattern  */

int main() {
  
  /*Code here*/
  int n=10;
  
  printf("Enter no. of rows you want");
  scanf("%d", &n);

  for (int i=1; i<=n; i++) {
   // 1st loop's body;
    for (int j=1; j<=2*n-1; j++) {
        if ( (j>=n-(i-1) ) && ( j<=n+(i-1) )){ // PRINTING STARS FROM n-(i-1) to n+(i-1)
        //tab to make changes
        printf("*");
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