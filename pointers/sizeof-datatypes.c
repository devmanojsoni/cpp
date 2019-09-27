//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Created by Manoj Soni on Friday, September 27, 2019  */
/* Description: sizeof -usecase  */

int main() {
  
  /*Code here*/
  int integer; float floats; double doubles; char character;
  printf("Syntax : sizeof(<data-type>)\n");
  printf("Size of an integer data-type using the current compiler is: %d\n", sizeof(int));
  printf("Size of a float data-type using the current compiler is: %d\n", sizeof(float));
  printf("Size of a double data-type using the current compiler is: %d\n", sizeof(double));
  printf("Size of a char data-type using the current compiler is: %d\n", sizeof(char));
  // This is also true
  printf("\nSyntax : sizeof(<variable>)\n");
  printf("Size of an integer variable using the current compiler is: %d\n", sizeof(integer));
  printf("Size of a float variable using the current compiler is: %d\n", sizeof(floats));
  printf("Size of a double variable using the current compiler is: %d\n", sizeof(doubles));
  printf("Size of a char variable using the current compiler is: %d\n", sizeof(character));
  
  // int size;
  // printf("Enter the size:");
  // scanf("%d", &size);
  //
  // int A[size]; // works fine in C++, as it allows dynamic declarations
  // float B[size]; // works fine in C++, as it allows dynamic declarations

  int I[10]; float F[10]; double D[10]; char C[10];
  printf("\nSyntax : sizeof(<array-name>)\n");
  printf("Size of an INTEGER ARRAY using the current compiler is: %d BYTES \n", sizeof(I));
  printf("Size of a FLOAT ARRAY using the current compiler is: %d BYTES \n", sizeof(F));
  printf("Size of a DOUBLE ARRAY using the current compiler is: %d BYTES \n", sizeof(D));
  printf("Size of a CHAR ARRAY using the current compiler is: %d BYTES \n", sizeof(C));
  
  
  
  getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|