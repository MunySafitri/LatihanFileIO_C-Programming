//Fungsi makro ini akan menghasilkan nilai benar jika argumenya 
//adalah huruf bukan angka

#include <stdio.h>
#include<string.h>
#include<conio.h>

int main() {
char *s;
  char buf [] = "This is a testing;";

  s = strrchr (buf, ';');
printf("hasil nya %s\n",s);
  if( isalpha( ';' ) )
  {
     printf( "Character 9 is not alpha\n" );
  }
//  s=strrchr(a,'i');
//  printf("%c",s);
  if( s ) 
  {
     printf( "Character ; is alpha\n" );
  }
  return 0;
}
