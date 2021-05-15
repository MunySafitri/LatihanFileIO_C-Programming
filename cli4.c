#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[]){
    if (argc != 4){
        printf("command yang anda masukkan salah!\n");
        printf("Contoh penggunaan command yang benar :"); 
        printf("./NamaProgramYangDituju inputFile.txt OutputFile.txt Karkater_yang_dihapus\n");
        return EXIT_FAILURE;

    }
 
    //char a;
 
    FILE* finp;
    FILE* foup;
    //int i;
    char *C;
    int i;
    char input[255][255];
    finp=(fopen(argv[1],"r"));
    foup=(fopen(argv[2],"w"));
    char character= argv[3][0];
    if(finp==NULL){
        printf("Program input yang anda masukkan salah!.\n");
        return EXIT_FAILURE;
    }
    while(fgets(input[i],255,finp)!=feof){
        C=input[i];
        i++;
        printf("%d",i);
    }
    printf("%s",input);

    //cara dua
    /*while(!feof(finp)){
        C=fgetc(finp);
        if(C==character){
            continue;
        }
      
        fputc(C,foup);
        }
     */   
    
    // for(int i=0;i<=sizeof(input);i++){
    //     C=fgetc(finp);
    //     if(C==character){
    //         continue;
    //     }
    //     fputc(C,foup);
    // }

    
    

    return 0;

}
