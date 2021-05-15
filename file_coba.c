#include<stdio.h>
#include<stdlib.h>
struct str{
	int a;
    char *b[100];
    char *c[100];
    
};
int main(){
    struct str s;
    int i;
    FILE* inp;
    FILE* binp;
    FILE* oup;
    inp=fopen("input1.txt","rb");
    binp=fopen("input2.bin","wb");
    oup=fopen("output2.txt","w");
    if(inp==NULL)  { 
        printf("file yang anda masukkan tidak dapat ditemukan\n");
        exit(1);
    }
    while (feof(inp)){
        fgets(s.b[i],sizeof(struct str),inp);
        printf("%s",s.b[i]);  
        fputs(s.b[i],binp);
        i++;
    }
    fclose(binp);
    binp=fopen("input1.bin","wb");
    while(feof(binp)){
        // fgets(s.i[i],sizeof(struct str),binp);
        fread(&s.b[i],sizeof(struct str),1,binp);
        printf("isinya adalah: %s",s.b[i]);
    }
}
