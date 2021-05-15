/*Allocates a block of memory for an array of num 
elements, each of them size bytes long, and initializes all its bits to zero.
Return Value
A pointer to the memory block allocated by the function.
fungsi calloc() akan mengembalikan pointer ke sebuah array yang terdiri dari n elemen
 data dengan size (ukuran) yang telah ditentukan sebelumnya. Apabila tidak terpenuhi 
 akan mengembalikan ke nilai NULL. Berbeda dengan fungsi malloc() yang tidak melakukan
  inisialisasi, pada fungsi calloc() ini ruang yang dialokasikan akan diisialisasi 
  dengan 0 */

#include <stdio.h>
#include<string.h>
#include<stdlib.h>//fungsi calloc
int main ()
{
  int i,n;
  int * pData;
  printf ("Amount of numbers to be entered: ");
  scanf ("%d",&i);
  pData = (int*) calloc (i,sizeof(int));
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
