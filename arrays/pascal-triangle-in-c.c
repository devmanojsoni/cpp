//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Tuesday, September 24, 2019  */
/* Description: Very Important: Pascal Triangle  */

int main() {
  
  /*Code here*/
  int n,m,preserve; 
  printf("Upto how many rows you wish to view the pascal triangle?");
  scanf("%d", &n);
  m=n;
  preserve=n;
  int A[100][100];
  
  // Process the Pascal Triangle
  for (int i=1; i<=m; i++) {
   // 1st loop's body;
   for (int j=1; j<=i; j++) {
        
        if (j==1) { // make the first column ALL ONES
            A[i][j]=1;
        } else if (i==j) { // make the diagonal ALL ONES
            A[i][j]=1;
        } else {
            A[i][j]=A[i-1][j-1]+A[i-1][j]; // observe the pattern
            }
    
   }
   // inner loop out, 1st loop's body;
  }

  // Print the triangle
  for (int i=1; i<=preserve; i++) {
   // 1st loop's body;
   for (int j=1; j<=i; j++) {
    //;
    printf("%d ",A[i][j]);
    //;
   }
   printf("\n");
  }
  
  
  
  getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|