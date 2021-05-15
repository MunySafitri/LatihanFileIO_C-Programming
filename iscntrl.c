/*Jika c adalah karakter kontrol, fungsi mengembalikan nilai nol, jika tidak kembali 0.

contoh
Contoh berikut menunjukkan penggunaan iscntrl () fungsi.
*/
#include <stdio.h>
#include <ctype.h>

int main ()
{
   int i = 0, j = 0;
   char str1[] = "all \a about \t programming";
   char str2[] = "w3cschool \n tutorials";
  
   /* ??????????? \a */
   while( !iscntrl(str1[i]) ) 
   {
      putchar(str1[i]);
      i++;
   }
  
   /* ??????????? \n */
   while( !iscntrl(str2[j]) ) 
   {
      putchar(str2[j]);
      j++;
   }
   
   return(0);
}
