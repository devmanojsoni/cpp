#include<stdio.h>
/* Observation: Float Format Specifiers  */
int main() {
// RJ = Right Justified, LJ = Left Justified, B = BLOCKS

float a = 8.358416, b = 35.434565, c = 134.456576, d = 2654.453456, e= 12345.678999, f= 123456.789999, g= 1234567.899999, h= 1234567.8999999;
// LJ Upto 2 decimal places
printf("%0.2f\n", a); // LJ |8|.|3|6|_|_| // As-Is + LJ + Rounded upto 2 Decimal Places
printf("%0.2f\n", b); // LJ |3|5|.|4|3|_| // 
printf("%0.2f\n", c); // LJ |1|3|4|.|4|6|
printf("%0.2f\n\n", d); // LJ |2|6|5|4|.|4|5|

// Won't understand the minus, therfore, LJ upto 2 decimal places
printf("%-6.2f\n", a); // LJ |8|.|3|6|_|_| // LJ + 6B + Rounded upto 2 Decimal Places
printf("%-6.2f\n", b); // LJ |3|5|.|4|3|_| // 
printf("%-6.2f\n", c); // LJ |1|3|4|.|4|6| // Rounded off upto two-decimal places
printf("%-6.2f\n\n", d); // LJ |2|6|5|4|.|4|5|

// LJ upto 6 decimal places
printf("%6f\n", a);
printf("%6f\n", b);
printf("%6f\n", c); 
printf("%6f\n\n", d); 

// LJ UPTO 6 DECIMAL PLACES WITH + SIGN IN THE FRONT
printf("%+6f\n", a); 
printf("%+6f\n", b); 
printf("%+6f\n", c); 
printf("%+6f\n\n", d); 

// CASE OF RIGHT JUSTIFIED
// %X.Y --> The Real Case, X = NO OF CONSIDERING BLOCKS,
// Y = NO. OF DECIMAL PLACES FROM RIGHT TO LEFT IN THAT X BLOCKS
printf("%6.2f\n", a); 
printf("%6.2f\n", b);
printf("%6.2f\n", c); 
printf("%6.2f\n\n", d); 

// Wont understand minus, therefore LJ, upto 6 decimal places
printf("%-6f\n", a);
printf("%-6f\n", b);
printf("%-6f\n", c);
printf("%-6f\n\n", d);

// CASE OF RJ, WITH 7 BLOCKS WITH UPTO DIFFERENT DECIMAL PLACES
printf("%7.2f\n", a); 
printf("%7.3f\n", b); 
printf("%7.4f\n", c); 
printf("%7.5f\n", d);
printf("%7.6f\n", a); 
printf("%7.7f\n", b); 
printf("%7.8f\n", c); 
printf("%7.9f\n\n", d);

// CASE OF RJ, WITH 8 BLOCKS WITH UPTO DIFFERENT DECIMAL PLACES
printf("%8.2f\n", a); 
printf("%8.3f\n", a); 
printf("%8.4f\n", a); 
printf("%8.5f\n", a);
printf("%8.6f\n", a); 
printf("%8.7f\n", a); 
printf("%8.8f\n", a); 
printf("%8.9f\n\n", a);

// CASE OF RJ, WITH 9 BLOCKS WITH UPTO DIFFERENT DECIMAL PLACES
printf("%9.2f\n", b); 
printf("%9.3f\n", b); 
printf("%9.4f\n", b); 
printf("%9.5f\n", b);
printf("%9.6f\n", b); 
printf("%9.7f\n", b); 
printf("%9.8f\n", b); 
printf("%9.9f\n\n", b);

// CASE OF RJ, WITH 10 BLOCKS WITH UPTO DIFFERENT DECIMAL PLACES
printf("%10.2f\n", c); 
printf("%10.3f\n", c); 
printf("%10.4f\n", c); 
printf("%10.5f\n", c);
printf("%10.6f\n", c); 
printf("%10.7f\n", c); 
printf("%10.8f\n", c); 
printf("%10.9f\n\n", c);

// CASE OF RJ, WITH 11 BLOCKS WITH UPTO DIFFERENT DECIMAL PLACES
printf("%11.2f\n", d); 
printf("%11.3f\n", d); 
printf("%11.4f\n", d); 
printf("%11.5f\n", d);
printf("%11.6f\n", d); 
printf("%11.7f\n", d); 
printf("%11.8f\n", d); 
printf("%11.9f\n\n", d);

// CASE OF RJ, WITH 12 BLOCKS WITH UPTO DIFFERENT DECIMAL PLACES
printf("%12.2f\n", e); 
printf("%12.3f\n", e); 
printf("%12.4f\n", e); 
printf("%12.5f\n", e);
printf("%12.6f\n", e); 
printf("%12.7f\n", e); 
printf("%12.8f\n", e); 
printf("%12.9f\n\n", e);

// CASE OF RJ, WITH 13 BLOCKS WITH UPTO DIFFERENT DECIMAL PLACES
printf("%13.2f\n", f); 
printf("%13.3f\n", f); 
printf("%13.4f\n", f); 
printf("%13.5f\n", f);
printf("%13.6f\n", f); 
printf("%13.7f\n", f); 
printf("%13.8f\n", f); 
printf("%13.9f\n\n", f);

// CASE OF RJ, WITH 14 BLOCKS WITH UPTO DIFFERENT DECIMAL PLACES
printf("%14.2f\n", g); 
printf("%14.3f\n", g); 
printf("%14.4f\n", g); 
printf("%14.5f\n", g);
printf("%14.6f\n", g); 
printf("%14.7f\n", g); 
printf("%14.8f\n", g); 
printf("%14.9f\n\n", g);

// CASE OF RJ, WITH 15 BLOCKS WITH UPTO DIFFERENT DECIMAL PLACES
printf("%15.2f\n", h); 
printf("%15.3f\n", h); 
printf("%15.4f\n", h); 
printf("%15.5f\n", h);
printf("%15.6f\n", h); 
printf("%15.7f\n", h); 
printf("%15.8f\n", h); 
printf("%15.9f\n\n", h);


return 0;
}

