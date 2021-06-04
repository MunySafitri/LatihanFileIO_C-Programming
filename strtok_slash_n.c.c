#include<stdio.h>
#include<string.h>
// int main(){
//     FILE * inp;
//     // char a[20]="aku\ndia\nanda\n";
//     // inp=fopen("tes.bin","wb");
//     // fwrite(a, sizeof(char), sizeof(a)/sizeof(char), inp);
//      char b[20];
//     //fclose(inp);
//     inp=fopen("tes.bin","rb");
//     fread(b, sizeof(char), sizeof(b)/sizeof(char), inp);
//     printf("testing baca file bin:\n%s\nselesai",b);
//     char *c[3];
//     int count=1;
//     printf("\ntesting 2:\n");
//     c[0]=strtok(b,"\n");
//     printf("c[%d]=%s\n",0,c[0]);
//     for (int i=1; i!=NULL; i++){
//         c[count]=strtok(NULL,"\n");
//         printf("c[%d]=%s\n",i,c[count]);
//         count++;
//     }
//  }

 //cara kedua
//  int main(){
//      char a[20]="aku\ndia\nanda\n";
//      char b[10][10];
//      char *token;
//      token = strtok(a, "\n");
    
//      for(int i=0 ; token!= NULL; i++){
//         strcpy(b[i],token);
//         printf("%s\n", b[i]);
//         token = strtok(NULL, "\n");

//      }
//      return 0;
//  }

//tes 3
 int main(){
     FILE * inp;
    //  char a[20]="aku\ndia\nanda\n";
     char b[10][10];
     char *token;
     char c[20];
     
     inp=fopen("tes.bin","rb");
     fread(c, sizeof(char), sizeof(b)/sizeof(char), inp);
     printf("testing baca file bin:\n%s\nselesai\n\n",c);
     token = strtok(c, "\n");
     for(int i=0 ; token!= NULL; i++){
        strcpy(b[i],token);
        printf("%s\n", b[i]);
        token = strtok(NULL, "\n");

     }
     return 0;
 }