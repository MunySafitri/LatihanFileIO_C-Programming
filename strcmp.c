#include<stdio.h>
#include<string.h>
int main() {
 char string1[20];
 char string2[20];
 strcpy(string1, "Ahmad");
 strcpy(string2, "Bani");
 printf("Return Value: %d\n", strcmp( string1, string2));
 strcpy(string1, "Hellooo");
 strcpy(string2, "Helloo");
 printf("Return Value: %d\n", strcmp( string1, string2));
 strcpy(string1, "Hello");
 strcpy(string2, "Hello");
 printf("Return Value: %d\n", strcmp( string1, string2));
 return 0;
} 
