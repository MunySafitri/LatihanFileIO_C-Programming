#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{   char kalimat[100];
    int i, j, jumkata=0, jumhuruf=0;

    //Menghitung jumlah kata dalam kalimat
    printf("Masukkan sebuah kalimat : "); gets(kalimat);
    for(i=0; i<=strlen(kalimat); i++)
    {
        if (kalimat[i] == 32) jumkata++;
    }
    printf("Jumlah kata = %d \n",jumkata+1);

 //menghitung jumlah huruf dalam setiap kata
    j = 1;
    printf("Kata - %d = ", j);
    for(i=0; i<=strlen(kalimat); i++)
    {
        printf("%c", kalimat[i]);
        jumhuruf++;
        if ((kalimat[i] == 32) || (kalimat[i]== 0))
  {
            printf(" - %d karakter\n",jumhuruf-1);
            j++;
            jumhuruf=0;
        }
        if (kalimat[i]== 32) printf("Kata - %d = ", j);
    }
  getch();
}
