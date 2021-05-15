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
    //
//    char input[1024]=argv[1];
//    char output[1024]=argv[2];
//    char hilang=argv[3];
    // char *karakter;
    // karakter=argv[3];
    char a;
    //printf("%s\n",karakter);
    FILE* finp;
    FILE* foup;
    int i;
    char C;
    //char kalimat[1024];
    //char *output=kalimat;
    char input[255];
    finp=(fopen(argv[1],"r"));
    foup=(fopen(argv[2],"w"));
    char *character= argv[3];
    if(finp==NULL){
        printf("Program input yang anda masukkan salah!.\n");
        return EXIT_FAILURE;
    }while(C=(!feof(finp))){
        // fgets(input,sizeof(finp),finp);

        fputc(C,foup);
        // fprintf(foup,"%s",input);
        // output=input;
        // printf("%s",output);
    }
//  while((a=fgetc(foup)) != EOF){
//    *output = a;
//    output++;
//  }
//   *output = '\0';
//     printf("Isi array kalimat = %s\n",kalimat);
    
    //strcpy(output,input);
    /*fwrite(output,sizeof(char),sizeof(output),foup);*/
    // for(i=0;i<sizeof(foup);i++){
    //     if (output==argv[3][0]){
    //         continue;
    //     }
    //     output[i]=output[i];

    // } 
    // fprintf(foup,"%s",output);
    // for(i=0;i<sizeof(input);i++){
    //     if(input[i]=karakter){
    //         continue;
    //     }
    //     output[i]=input[i];
    // }
    // printf("\nhasil output:%s",output);

    // while(fgetc(finp) != EOF){
    //     if(fgetc(finp)==character){
    //         continue;
    //     }
    //     fwrite(output,sizeof(char),sizeof(output),finp);

    // }
    // if(fopen(argv[1],"r")==NULL){
    // 	printf("Program input yang anda masukkan salah!.\n");
    // 	printf("check your folder for knows your name file!.");
    // 	return EXIT_FAILURE;
	// }
    
    

    return 0;

}
