//#include <stdio.h>
//#include<conio.h>
//
//int main() {
// 	char a=';';
//  if( isalnum( a))
//  {
//     printf( "Character ; is not alphanumeric\n %c",a );
//  }
//  else if( isalnum( 'A' ) )
//  {
//     printf( "Character A is alphanumeric\n" );
//  }
//  return 0;
//}
//Fungsi makro ini akan menghasilkan nilai benar jika argumennya adalah huruf besar, 
//huruf kecil, dan karakter digit ‘0’ sampai ‘9’.
#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'd';
   int var2 = '2';
   int var3 = '\t';
   int var4 = ';';
    
   if( isalnum(var1) )
   {
      printf("var1 = |%c| ?????\n", var1 );
   }
   else
   {
      printf("var1 = |%c| ??????\n", var1 );
   }
   if( isalnum(var2) )
   {
      printf("var2 = |%c| ?????\n", var2 );
      printf("%s","akan ditampilkn\n");
   }
   else
   {
      printf("var2 = |%c| ??????\n", var2 );
   }
   if( isalnum(var3) )
   {
      printf("var3 = |%c| ?????\n", var3 );
      printf("%s","tidak akan ditampilkn"); //karna isalnum bernilai zero
   }
   else
   {
      printf("var3 = |%c| ??????\n", var3 );
      //printf("%s","tidak ditampilkn");
   }
   if( isalnum(var4) )
   {
      printf("var4 = |%c| ?????\n", var4 );
   }
   else
   {
      printf("var4 = |%c| ??????\n", var4 );
   }
	
   return(0);
}
