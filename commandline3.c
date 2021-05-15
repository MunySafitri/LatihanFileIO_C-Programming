#include <stdio.h>
int main (int argc, char *argv[]){
 if (argc != 2){
 printf( "Cara menjalankan program: %s filename", argv[0]);
 return 1;
 }
 FILE * fp = fopen( argv[1], "r" );
 if (fp == 0 ){
 printf( "Error saat fopen...\n" );
 } //Taufik Fuadi Abidin - Irvanizam, Jurusan Informatika, FMIPA Universitas Syiah Kuala – http://www.informatika.unsyiah.ac.id 4
 else {
 int chr;
 while((chr = fgetc(fp))!= EOF ){
 printf("%c",chr);
 }
 fclose( argv[1] );
 }
 return 0;
}
