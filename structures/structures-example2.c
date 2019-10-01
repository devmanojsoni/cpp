//***************************************************************---C76-->|
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> // Required for strcpy

/* Created by Manoj Soni on Tuesday, October 01, 2019  */
/* Description: Structures Example 2  */
struct complex {
    int real; // -- 2 bytes
    int img; // 2 bytes
    // ----------Total 4 bytes
    // size of this struct complex is 4bytes
};
struct student {
    int roll; // 2 bytes lets say
    char name[25]; // 1 x 25 = 25bytes
    char dept[30]; // 1byte
    char address[100]; // 50bytes
    //------------------Total 77 bytes, therefore size of this
    // struct 'student' will be 77 bytes
    // 78bytes if we would have considered integers as 4bytes
};

int main() {
  
  /*Code here*/
  // declare a variable of type student
  struct student s;
  // set the roll no
  s.roll=9211;
  
  //Problem: arrays in C are not assignable 
  
  // to struct instances's char members
  // This will cause error in C, but valid in C++
  // s.name="Manoj"; // Assigning array of characters to a character 
  // member of a custom struct instance is invalid in C, "NOT ASSIGNABLE"
  // This has nothing to do with structs - arrays in C are not assignable:
  // More info: https://tinyurl.com/CharArrayInStructsUnAssignable
  
  // Solution: In C language, use strcopy function in header file string.h
  
  strcpy(s.name, "Manoj");
  strcpy(s.dept,"Computer Science"); 

  //This will give a warning
  // warning: '__builtin_memcpy' writing 104 bytes into a region of size 
  // 101 overflows the destination
  // coz of the large length array of characers
  // strcpy(s.address, "House no 420, Yoganda, Prem Gali, Mumbai 110011, 
  // India, Planet Earth, Solar System, Milky Way, Universe");
  // caused error bcoz we passed more than declared 100 characters
  // But this won't give any warning
  strcpy(s.address,"House no 420, Yoganda, Prem Gali,Mumbai 110011,India");
  
  // char test[20] = "Hi I am Manoj"; // This is valid in C though
  // but it must not, according to the above stackoverflow link, dont know
  // why it is valid here maybe
  // bcoz we are declaring it here within the main function and assigning 
  // it here

  // char address[]; // this will cause error in C, 
  // you must provide the size
  
  printf("%d\n", s.roll);
  // printf("%c\n", s.name); // This will cause error, 
  // "%c is only for 1 character"
  // not for array of characters
  printf("%s\n",s.name); // Now valid
  printf("%s\n", s.dept); 
  printf("%s", s.address);

  
  getch();
  return 0;
}

//** L49, A4 Paper ends, leave L50 empty

//***************************************************************---C76-->|