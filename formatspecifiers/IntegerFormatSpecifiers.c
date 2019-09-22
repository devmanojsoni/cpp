#include <stdio.h>
/* Observation: Integer Format Specifiers  */
int main() {
// RJ = Right Justified, LJ = Left Justified, B = BLOCKS
// %[A].[B]d -->> meaning A is the *CONSIDERING SIDE and B is the *FILLING SIDE
// see the notebook to understand better
// If it is a decimal, no matter +ve or -ve decimal, it willbe RJ
// e.g -->> %2.1d, %-2.1d, %1.2d, %-1.2d
// If it is a whole integer then also it will be RJ, eg %6d, %101d etc
// if it is a -negative whole integer only then only it will be LJ, eg %-6d
int a = 2, b = 28, c = 123, d = 2345, e = 68763; 
int f = 670001, g = 6700001;
// fill in the zeros -- for practice
printf("%0.6d\n", a); // RJ |_|_|_|_|_|2| // 6B + RJ
printf("%-0.6d\n", a); // RJ |_|_|_|_|_|2| // 6B + RJ
printf("%6.6d\n", a); // RJ |_|_|_|_|_|2| // 6B + RJ
printf("%-6.6d\n", a); // RJ |_|_|_|_|_|2| // 6B + RJ
///////////////////////////////////////////////////////--> for Practice
printf("%6.7d\n", a); // RJ |_|_|_|_|_|_| // 
printf("%-6.7d\n", a); // RJ |_|_|_|_|_|_| // 
printf("%6.7d\n", a); // RJ |_|_|_|_|_|_| // 
printf("%-6.7d\n", a); // RJ |_|_|_|_|_|_| // 
///////////////////////////////////////////////////////
printf("%6d\n", a); // RJ |_|_|_|_|_|2| // 6B + RJ
printf("%-6d\n", a); // RJ |_|_|_|_|_|2| // 6B + LJ
printf("%+6d\n\n", a); // RJ |_|_|_|_|_|2| // 6B + RJ

printf("%6d\n", a); // RJ |_|_|_|_|_|2| // 6B + RJ
printf("%6d\n", b); // RJ |_|_|_|_|2|8| // RJ coz of NO PLUS SIGN
printf("%6d\n", c); // RJ |_|_|_|1|2|3|
printf("%6d\n", d); // RJ |_|_|2|3|4|5|
printf("%6d\n", e); // RJ |_|6|8|7|6|3|
printf("%6d\n", f); // RJ |6|7|0|0|0|1|
printf("%6d\n", g); // RJ |6|7|0|0|0|0|1| // 7B + Don't follow Above

printf("%-6d\n", a); // LJ |2|_|_|_|_|_| // LJ + 6B
printf("%-6d\n", b); // LJ |2|8|_|_|_|_| // LJ coz of minus(-) sign
printf("%-6d\n", c); // LJ |1|2|3|_|_|_|
printf("%-6d\n", d); // LJ |2|3|4|5|_|_|
printf("%-6d\n", e); // LJ |6|8|7|6|3|_|
printf("%-6d\n", f); // LJ |6|7|0|0|0|1|
printf("%-6d\n", g); // LJ |6|7|0|0|0|0|1| // 7 blocks + Don't follow Above
// but looks like it follow
//new line
printf("%+6d\n", a); // RJ |_|_|_|_|+|2| // 6 blocks + PLUS SIGN included in blocks + RJ
printf("%+6d\n", b); // RJ |_|_|_|+|2|8| // includes plus Sign coz of PLUS SIGN
printf("%+6d\n", c); // RJ |_|_|+|1|2|3|
printf("%+6d\n", d); // RJ |_|+|2|3|4|5|
printf("%+6d\n", e); // RJ |+|6|8|7|6|3|
printf("%+6d\n", f); // RJ |+|6|7|0|0|0|1|
printf("%+6d\b\b\b\b", g); // RJ |+|6|7|0|0|0|0|1| // 7 blocks + Don't follow Above

/*The characters are exactly as documented - \b equates to a character code of 0x08 and \r equates to 0x0d.
The thing that varies is how your OS reacts to those characters. Back when displays were trying to emulate 
an old teletype those actions were standardized, but they are less useful in modern environments and 
compatibility is not guaranteed*/

/*The characters will get send just like that to the underlying output device (in your case probably a terminal emulator).
It is up to the terminal's implementation then how those characters get actually displayed. 
For example, a bell (\a) could trigger a beep sound on some terminals, a flash of the screen on others, 
or it will be completely ignored. It all depends on how the terminal is configured.*/  
  return 0;
}
