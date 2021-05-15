#include <stdio.h>
#include<stdlib.h>
//Fungsi dari free adalah untuk membebaskan memori yang
// telah dipakai dalam fungsi malloc() , calloc().
int main ()
{
  int * buffer1, * buffer2, * buffer3;
  buffer1 = (int*) malloc (100*sizeof(int));
  buffer2 = (int*) calloc (100,sizeof(int));
  buffer3 = (int*) realloc (buffer2,500*sizeof(int));
  free (buffer1);
  free (buffer3);
  return 0;
}
