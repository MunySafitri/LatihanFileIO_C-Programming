#include<stdio.h>
#include<string.h>
int main(){
	char v_larik_kalimat_1[40]="Kalimat ini lebih panjang", v_larik_kalimat_2[]="kalimat lebih pendek";
	printf("\n%s:%d anggota",v_larik_kalimat_1, sizeof(v_larik_kalimat_1));
	printf(",%d karakter \n", strlen(v_larik_kalimat_1));
	strcpy(v_larik_kalimat_1, v_larik_kalimat_2);
	printf("%s",v_larik_kalimat_1);
	//strcpy(v_larik_kalimat_1,v_larik_kalimat_2);
	strncpy(v_larik_kalimat_1,v_larik_kalimat_2,4);
	v_larik_kalimat_1[4]='\0';
	printf("%s",v_larik_kalimat_1);
	return 0;
	
}
