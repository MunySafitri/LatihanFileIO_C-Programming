#include<stdio.h>
//#include<ctype.h>
#include<conio.h> //untuk _getch
#include<string.h>


int main(){
    char username[100];
    char password[100];

    printf("masukkan username: ");
    scanf("%[^\n]", username);

    printf("masukkan password: ");
    fflush(stdin);

    char ch;
    int i =0;
    while((ch = (char) _getch()) != '\r'){
        password[i] = ch;
        //printf("%c",ch);
        i++;
    }
    printf("\n");
    if((strcmp(username,"Muny") == 0) && (strcmp(password, "Safitri") == 0)) {
        printf("SELAMAT ANDA BOLEH MASUK!\n");
    }
    else{
        printf("MAAF, USERNAME DAN PASS ANDA TIDAK SESUAI\n");
    }
}//kekurangan tidak bisa menghapus isi pass tersebut