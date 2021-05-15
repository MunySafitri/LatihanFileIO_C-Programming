
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

main()
{
FILE *fp;
char baris[30], string1[5], string2[5], string3[5];
int i;

fp=fopen("filetest.txt","r");
if (fp==NULL) {
printf("file tdk bisa dibuka\n");
exit(1);
}
printf("\n");
printf("==========================\n");
printf("isi file : \n");
printf("==========================\n");

 // baca tiap baris sampai fp ga ada char/null

i= 0;
while (fgets(baris,sizeof baris,fp)!=NULL)  {

printf("%s",baris);   // mencetak string baris ke layar

i++;
}

printf("\n");
printf("==========================\n");
return 0;
}
