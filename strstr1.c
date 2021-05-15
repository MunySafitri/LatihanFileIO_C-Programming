#include <stdio.h>
#include<string.h>

int main() {
   char s1 [] = "My House is small";
   char s2 [] = "My Car is green";

   printf ("Returned String 1: %s\n", strstr (s1, "se"));
   printf ("Returned String 2: %s\n", strstr (s2, "g"));
}//The strstr function locates the first occurrence of the string string1 in the string
// string2 and returns a pointer to the beginning of the first occurrence.
