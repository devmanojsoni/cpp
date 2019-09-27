//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Saturday, September 28, 2019  */
/* Description: Pointer Arithmetic  */
int main() {
  
  /*Code here*/
  int A[]={2,4,6,8,10,12,13,67,99,777,1024};
    int *p=A;
    
    printf("-->%d, ",*p);
    // move pointer to next location to print 4
    p++;
    printf("-->%d, ",*p);
    
    p=p+3; // pointer will be pointing on 10
    printf("-->%d, ",p[-4]);    // complete this statement to print 2 without moving pointer
    
    int n;//,m;
    int *q=A;
    printf("\nMove to a new index: ");
    scanf("%d", &n);
    //m=n;
    q=q+n;
    printf("Pointer is now set to index -->%d, where value is %d.", n, *q);

    //Play around
    //int input;
    free(p);
    p=NULL;

    int input;
    printf("\nWanna Play around?, Enter 1 if YES, 0 if NO: ");
    scanf("%d", &input);
    
    while(input==1){
        
        int loopinput, *p=A;
        
        printf("\nMove to a new index: ");
        scanf("%d", &loopinput);
        //m=n;
        p=p+loopinput;
        printf("\nPointer is now set to index -->%d, where value is %d.\n", loopinput, *p);
        //
        free(p);
        p=NULL;

        //Ask if user wanna play around
        int again;
        printf("Again?, Enter 1 if YES, 0 if NO:\n");
        scanf("%d", &again);
        
        if (again!=1) {
            exit(0);
            getch();
            return 0;
        }  else {
            //continue;
        }
        
    }


  getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|