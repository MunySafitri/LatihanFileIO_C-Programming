#include <stdio.h>
#include<string.h>
int main() {
 char input_str[20];
 char *output_str;
 strcpy(input_str, "Informatika");
 printf("input_str: %s\n", input_str);
 output_str = strcpy(input_str, "is the best");
 printf("input_str: %s\n", input_str);
 printf("output_str: %s\n", output_str);
 return 0;
} 
