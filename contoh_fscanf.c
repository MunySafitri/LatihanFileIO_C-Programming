#include<stdio.h>
int main(){
        char nama[100];
        int umur;
	FILE *in=fopen("test.txt","r");
        while(!feof(in)){
           fscanf(in,"\"%[^\"]\"%d\n", &nama, &umur);fflush(stdin);   
           // %[^#] artinya kita menyimpan bagian dari string dalam file sampai tanda #. 
           // Kita tidak menggunnakan %s karena nama mengandung spasi
           printf("%s \n%d\n", nama, umur);
        }
	fclose(in);
	getchar();
    return 0;
}

