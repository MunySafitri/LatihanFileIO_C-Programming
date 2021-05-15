#include<stdio.h>
int main ()
{
    int i, n;
	float y, z, ratarata[100],jumlah[100] ;
    char x[100];
    printf("Masukkan jumlah mahasiswa :  ");
    scanf ("%d",&n);
    getchar ();
    //jumlah = 0;
    for (i=0;i<n;i++)
    {
        printf ("\nMasukkan nama mahasiswa ke-%d : ",i+1);
        scanf ("%s",x);
        printf ("Masukkan nilai Algoritma ke-%d : ",i+1);
        scanf ("%f", &y);
        printf ("Masukkan nilai pemograman ke-%d : ",i+1);
        scanf("%f", &z);
        jumlah[i]=y+z;
        //printf("%f",jumlah[i]);
        ratarata[i]= jumlah[i]/2;

    }   
    for(i=0;i<n;i++){
	
    printf("\nRatarata nilai mahasiswa %d: %.2f\n",i+1,ratarata[i]);
    
}
    return 0;
}
