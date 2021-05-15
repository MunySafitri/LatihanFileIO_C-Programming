/*#include <stdio.h>
/* copy input to output; 1st version 
main()
{
int c;

while (c != EOF) {          // jika blm  sampai end of file

c = getchar();                 // ambil character

putchar(c);                      // tampilkan character ke layar
}
}
*/

//input menggunakan scanf
/*
#include <stdio.h>

int main()
{
int bilangan_int;

printf( "masukan data integer: " );
scanf( "%d", &bilangan_int );
printf( "yg anda masukan %d", bilangan_int );
return 0;
}*/

//input menggunakan sscanf
#include <stdio.h>
#include <stdlib.h>

int main()
{
int bilangan1, bilangan2;
char string1[20], string2[20], tampung[100];

strcpy( tampung, "apa kabar 17 21" );
sscanf( tampung, "%s %s %d %d", string1, string2, &bilangan1, &bilangan2 );

 // string1 berisi “apa”, string2 berisi “kabar , bilangan1 berisi 17,  bilangan2 berisi 21

printf("  %s %s, %d = %d    \n", string1, string2, bilangan1, bilangan2 );  // print ke layar monitor

return(0);
}
