#include <stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
 int sum = 0, i = 1;
 for(i=1; i<argc; i++){
 sum = sum + atoi(argv[i]);
 }
 printf("%d\n", sum);
 exit(EXIT_SUCCESS);
} 
