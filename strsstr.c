#include<stdio.h>
#include<string.h>
int main(){
	/*strstr() memiliki dua argumen - yang pertama 
	berupa utaian karakter yang untuk dicari, dan yang kedua berupa sub untaian karakter pencarian.
	 apabila sub untaian karakter pencarian. apabila sub untaian karakter tidak ditemukan maka fungsi memberikan keluaran sebuah nilai null, 
	 apabila sebliknya, yaitu ditrmukan upa sebuah
	 maka fungsi akan memberikan keluaran berupa sebuah pointer karaj=kter pertama sub untaian
	 karakter yang pertma kali munculk*/
	char kalimat1[]="ibu membeli apel di toko";
	char kalimat2[]="apel";	 
	if(strstr(kalimat1,kalimat2)==NULL){
		printf("Sub untaian karakter\"apel\" tidak ditemukan.\n");
	}else{
		printf("sub untaian karakter \"apel\" ditemukan di %p\n",strstr(kalimat1,kalimat2));
		printf("nomor indeks anggota %d\n\n",strstr(kalimat1,kalimat2));
}
	printf("%s vs \"apel\":%d\n",kalimat2,strcmp(kalimat2,"apel"));
	printf("%s vs \"apel\":%d\n",kalimat2,strcmp(kalimat2,"Apel"));
	printf("%s vs \"apel\":%d\n",kalimat2,strcmp(kalimat2,"APEL"));
}

