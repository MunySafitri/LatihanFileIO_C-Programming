#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
int main(void){
 FILE *fp;
 int ch;
 fp = fopen("output_file.txt", "w");
 fprintf(fp, "%s", "Program Studi Informatika\n");
 fprintf(fp, "%s", "Universitas Syiah Kuala, Banda Aceh 23111\n\n\n");
 fclose(fp);
 if((fp = fopen("output_file.txt", "r"))==NULL) {
 printf("Error reading file...\n");
 return EXIT_FAILURE;
 }
 while ((ch=fgetc(fp))!=EOF) {
 putchar(tolower(ch));
 }
 fclose(fp);
 return EXIT_SUCCESS;
}
