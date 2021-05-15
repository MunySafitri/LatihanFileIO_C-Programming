/*Malloc merupakan fungsi standart untuk mengalokasinkan memori

Prototipe dari fungsi malloc adalah : void malloc (int jml_byte);

Banyaknya byte yaang akan dipesan dinyatakan sebagai parameter fungsi. 
Untuk return value dari fungsi ini adalah sebuah pointer yang tak bertipe
 ( pointer to void) yang menunjuk ke buffer(tempat penyimpanan sementara) 
 yang dialokasikan .

Pointer harus dikonversi pada tipe data yang sesuai ( dengan menggunakan type
 cast) agar bisa mengakses data yang disimpan dalam buffer.

Kegunaan dari malloc adalah mengembalikan pointer kesejumlah n byte ruang memori 
yang belum di inisialisasi. Apabila tidak terpenuhi akan mengembalikan ke nilai NULL.*/
#include <stdio.h>
#include<stdlib.h>

int main ()
{
  int i,n;
  int * pData;
  printf ("Amount of numbers to be entered: ");
  scanf ("%d",&i);
  pData = (int*) malloc (i*sizeof(int));
  if (pData==NULL) exit (1);
  for (n=0;n<i;n++)
  {
    printf ("Enter number #%d: ",n);
    scanf ("%d",&pData[n]);
  }
  printf ("You have entered: ");
  for (n=0;n<i;n++) printf ("%d ",pData[n]);
  free (pData);
  return 0;
}
