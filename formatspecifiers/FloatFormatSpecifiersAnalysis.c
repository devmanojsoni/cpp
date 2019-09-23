#include<stdio.h>
/* Observation: Float Format Specifiers  */
int main() {
// RJ = Right Justified, LJ = Left Justified, B = BLOCKS

float a = 8.358416, b = 35.434565, c = 134.456576, d = 2654.453456, e= 12345.678999, f= 123456.789999, g= 1234567.899999, h= 1234567.8999999;
//char abc[] = "0.2f";
//printf("%s", abc[]);
printf("%0.2f\n", a); // LJ |8|.|3|6|_|_| // As-Is + LJ + Rounded upto 2 Decimal Places
printf("%0.2f\n", b); // LJ |3|5|.|4|3|_| // LJ coz of 0.*
printf("%0.2f\n", c); // LJ |1|3|4|.|4|6|
printf("%0.2f\n\n", d); // LJ |2|6|5|4|.|4|5|


printf("%-6.2f\n", a); // LJ |8|.|3|6|_|_| // LJ + 6B + Rounded upto 2 Decimal Places
printf("%-6.2f\n", b); // LJ |3|5|.|4|3|_| // LJ coz of minus(-) sign
printf("%-6.2f\n", c); // LJ |1|3|4|.|4|6| // Rounded off upto two-decimal places
printf("%-6.2f\n\n", d); // LJ |2|6|5|4|.|4|5|

//new line
printf("%6f\n", a); // LJ |_|_|_|_|+|2| // 6B + PLUS SIGN included in blocks + RJ
printf("%6f\n", b); // LJ |_|_|_|+|2|8| // includes plus Sign coz of PLUS SIGN
printf("%6f\n", c); // LJ |_|_|+|1|0|0|
printf("%6f\n\n", d); // LJ |_|+|4|0|0|0|

printf("%+6f\n", a); // LJ |_|_|_|_|+|2| // 6 blocks + PLUS SIGN included in blocks + Right Justified
printf("%+6f\n", b); // LJ |_|_|_|+|2|8| // includes plus Sign coz of PLUS SIGN
printf("%+6f\n", c); // LJ |_|_|+|1|0|0|
printf("%+6f\n\n", d); // LJ |_|+|4|0|0|0|

//new line
printf("%6.2f\n", a); // RJ |_|_|_|_|+|2| // 6B & +' included in blocks + RJ
printf("%6.2f\n", b); // RJ |_|_|_|+|2|8| // includes plus Sign coz of PLUS SIGN
printf("%6.2f\n", c); // RJ |_|_|+|1|0|0|
printf("%6.2f\n\n", d); // RJ |_|+|4|0|0|0|

//new line
printf("%-6f\n", a);
printf("%-6f\n", b);
printf("%-6f\n", c);
printf("%-6f\n\n", d);

//new line
printf("%7.2f\n", a); 
printf("%7.3f\n", b); 
printf("%7.4f\n", c); 
printf("%7.5f\n", d);
printf("%7.6f\n", a); 
printf("%7.7f\n", b); 
printf("%7.8f\n", c); 
printf("%7.9f\n\n", d);

//new line
printf("%8.2f\n", a); 
printf("%8.3f\n", a); 
printf("%8.4f\n", a); 
printf("%8.5f\n", a);
printf("%8.6f\n", a); 
printf("%8.7f\n", a); 
printf("%8.8f\n", a); 
printf("%8.9f\n\n", a);

//new line
printf("%9.2f\n", b); 
printf("%9.3f\n", b); 
printf("%9.4f\n", b); 
printf("%9.5f\n", b);
printf("%9.6f\n", b); 
printf("%9.7f\n", b); 
printf("%9.8f\n", b); 
printf("%9.9f\n\n", b);

//new line
printf("%10.2f\n", c); 
printf("%10.3f\n", c); 
printf("%10.4f\n", c); 
printf("%10.5f\n", c);
printf("%10.6f\n", c); 
printf("%10.7f\n", c); 
printf("%10.8f\n", c); 
printf("%10.9f\n\n", c);

//new line
printf("%11.2f\n", d); 
printf("%11.3f\n", d); 
printf("%11.4f\n", d); 
printf("%11.5f\n", d);
printf("%11.6f\n", d); 
printf("%11.7f\n", d); 
printf("%11.8f\n", d); 
printf("%11.9f\n\n", d);

//new line
printf("%11.2f\n", e); 
printf("%11.3f\n", e); 
printf("%11.4f\n", e); 
printf("%11.5f\n", e);
printf("%11.6f\n", e); 
printf("%11.7f\n", e); 
printf("%11.8f\n", e); 
printf("%11.9f\n\n", e);

//new line
printf("%11.2f\n", f); 
printf("%11.3f\n", f); 
printf("%11.4f\n", f); 
printf("%11.5f\n", f);
printf("%11.6f\n", f); 
printf("%11.7f\n", f); 
printf("%11.8f\n", f); 
printf("%11.9f\n\n", f);

//new line
printf("%11.2f\n", g); 
printf("%11.3f\n", g); 
printf("%11.4f\n", g); 
printf("%11.5f\n", g);
printf("%11.6f\n", g); 
printf("%11.7f\n", g); 
printf("%11.8f\n", g); 
printf("%11.9f\n\n", g);

//new line
printf("%11.2f\n", h); 
printf("%11.3f\n", h); 
printf("%11.4f\n", h); 
printf("%11.5f\n", h);
printf("%11.6f\n", h); 
printf("%11.7f\n", h); 
printf("%11.8f\n", h); 
printf("%11.9f\n\n", h);


return 0;
}

