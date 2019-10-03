#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* Created by Manoj Soni on Thursday, September 19, 2019  */
/* Description: Prime no: if a no. is divisible by1 and itself then only it is prime, 2 is the smallest even prime no.  */
// That means prime numbers have only two factors, 1 and the number itself

int main() {
  
  /*Code here*/
  
  void primeNo(int); // you must declare a function before calling it
  //primeNo(97);
   
  for (int i=2,n=1000; i<=n; i++) { // i=0 only initialized once
   primeNo(i);// after init --> CPU 1: Condition check, 2: Process statements, 3:Update
   
  }
  
  //}
  
  //getch();
  return 0;
}

void primeNo(int x){
  
  int counti = 0; int isprime = 0;
  for (int i=1; i<=x; i++) { // i=0 only initialized once
   // after init --> CPU 1: Condition check, 2: Process statements, 3:Update
   if ((x%i==0)){
    //tab to code
    counti++;
    if(counti<=2){
        isprime=1;
    } else {
        isprime=0;
    }
   }
  }
  if (isprime==1){ printf("%d,",x);} //else { printf("%d is it NOT prime\n",x);}
  
}