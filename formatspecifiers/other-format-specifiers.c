#include <stdio.h> 
#include <stdlib.h>
int main() 
{ 
    // Character format specifier
    char ch = 'A'; 
    printf("%c\n", ch); // "%c" is used as character format specifier in C Language
    
    // double format specifier, scientific or exponential notation
    float f1 = 12, f2 = 1.2, f3 = 12.67; 
    printf("%f\n", f1); // "%f" or %e are used as Double format specifier
                        // 12.000000
    printf("%e\n\n", f1); // "%e" displays a float in exponential form
                            // shifted to 1 decimal place, so e+001 with fillings
                             // 1.200000e+001
    printf("%f\n", f2); // "%f" or %e are used as Double format specifier
                        // 1.200000
    printf("%e\n\n", f2); // no shifting of decimal places, so e+000 with fillings
                            // 1.200000e+000

    printf("%f\n", f3); // "%f" or %e are used as Double format specifier
                        // 12.670000
    printf("%e\n\n", f3); // shifted to 1 decimal place to become 1.267
                            // so, e+001 with fillings
                            // so, 1.267000e+001

    // formatting strings using format specifiers
    char str[] = "geeksformany"; 
    printf("%20s\n", str); // creates 20 blocks, right justified
    printf("%-20s\n", str); // creates 20 blocks, left justified
    printf("%20.5s\n", str); // creates 20 blocks, right justified, prints 5 chars only
    printf("%-20.5s\n", str); // creates 20 blocks, left justified, prints 5 chars only

    // integer format specifier
    int x = 45, y = 90; 
    printf("%d\n", x); // %d 
    printf("%i\n", x); // or %i
    
    // octal format specifier for integers
    int a = 67; 
    printf("%o\n", a); // %o converts an Integer Value to its Octal Value
    // This is why format specifiers are also termed as conversion specifiers
    // To get the o/p you need to understand how to convert a decimal (base 10) into octal (base 8)
    
    // string format specifier
    char b[] = "geeksforgeeks"; // this is the way u declare a string in C Language
    // char a[]; -- Array of strings, char a[] = "manojsoni"; -- declared & initialized
    printf("%s\n", b); // "%s" is used to specify print character arrays as strings

    // unsigned hexadecimal format specifier for integers 
    int c = 15; 
    printf("%x\n", c); // "%x" converts an integer to hexadecimal
    return 0;

    // unsigned octal format specifier for integers 
    int d = 67; 
    printf("%o\n", d); // %o converts an Integer Value to its Octal Value
    // This is why format specifiers are also termed as conversion specifiers

    // To get the o/p you need to understand how to convert a decimal (base 10) into octal (base 8)
    //
    getch();
    return 0;
}

