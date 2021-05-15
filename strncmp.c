#include <stdio.h>
#include<string.h>
int main() {
  char string1[20];
  char string2[20];

  strcpy(string1, "Hello");
  strcpy(string2, "Hellooo");
  printf("Return Value is : %d\n", strncmp( string1, string2, 4));

  strcpy(string1, "Helloooo");
  strcpy(string2, "Hellooo");
  printf("Return Value is : %d\n", strncmp( string1, string2, 10));

  strcpy(string1, "Hellooo");
  strcpy(string2, "Hellooo");
  printf("Return Value is : %d\n", strncmp( string1, string2, 20));

  return 0;
}
