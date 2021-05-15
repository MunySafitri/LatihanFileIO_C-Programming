#include<stdio.h>
#include<string.h>
int main(){
	char v_kalimat_1[100]="muny";
	char v_kalimat_2[]="safitri";
	char v_kalimat_3[100]="cantik dan ";
	char v_kalimat_4[]="imutekuneng";

	strcat(v_kalimat_1,v_kalimat_2);
	printf("\n%s\n",v_kalimat_1);
//	strncat(v_kalimat_3, v_kalimat_4,3);
//	printf("\n%s\n",v_kalimat_3);
	strncat(v_kalimat_3,(v_kalimat_4+5),3);//menampilkan kalimat ke 4 dari 5 dengn munculnya 3
	printf("\n%s\n",v_kalimat_3);
	return 0;
}
