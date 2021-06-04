#include<stdio.h>
#include<stdlib.h>
#include <errno.h>
extern int errno;

typedef struct str{
    int num;
    char kata[1024];
    float des;
}string;
int main(){
    int choose;
    char kalimat[1000];
    char nama_file[100];
    printf("Dibutuhkan data dengan nama file \"nama_file.txt\"\n");
    printf("Masukkan nama file anda: ");
    scanf("%s",nama_file);
    
    FILE* finp = fopen(nama_file,"r");
    if (finp == NULL) {
        fprintf(stderr, "Value of errno: %d\n", errno);
       //fprintf(stderr, "Error opening the file: %s\n", strerror(errno));
        perror(nama_file);
        // printf("Error Reading File. Please Check Input File.\n");
        return EXIT_FAILURE;
    }
    //string s;
    FILE* foup= fopen("output.txt","wb");
    while(fgets(kalimat,1000,finp)){
        //printf("%s",kalimat);
        fwrite(kalimat, sizeof(kalimat), 1, foup);
    }
    fclose(foup);
    fclose(finp);
    foup= fopen("output.txt","rb");
     while(fread(kalimat, sizeof(kalimat), 1, foup)){
     	//fread(kalimat, sizeof(kalimat), 1, foup);
     	printf("%s",kalimat);
     }
     
    
}
