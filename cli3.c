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
    FILE* finp;
    FILE* foup;
    finp=(fopen(argv[1],"r"));
    foup=(fopen(argv[2],"w"));
    char character= argv[3][0];
    char C;
    if(finp==NULL){
        printf("Program input yang anda masukkan salah!.\n");
        return EXIT_FAILURE;
    }while(!feof(finp)){
        C=fgetc(finp);
        if(C==character){
            continue;
        }
        fputc(C,foup);  
    }
    return 0;
}