#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
    if (argc != 4){
        printf("command yang anda masukkan salah!\n");
        printf("Contoh penggunaan command yang benar :"); 
        printf("./NamaProgramYangDituju inputFile.txt OutputFile.txt Karkater_yang_dihapus\n");
        return EXIT_FAILURE;

    }
//    char *input=argv[1];
//    char *output=argv[2];
//    char hilang=argv[3];
    FILE* finp;
    FILE* foup;
    finp=(fopen(argv[1],"r"));
    if(finp==NULL){
        printf("Program input yang anda masukkan salah!.\n");
        return EXIT_FAILURE;
    }
    // if(fopen(argv[1],"r")==NULL){
    // 	printf("Program input yang anda masukkan salah!.\n");
    // 	printf("check your folder for knows your name file!.");
    // 	return EXIT_FAILURE;
	// }
    
    

    return 0;

}
