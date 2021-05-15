#include<stdio.h>
int main(){
	FILE* data;
	char a[100];
	FILE* foup;
	data=fopen("input.txt","r");
	foup=fopen("output12.txt","wb");
	while(!feof(data)){
		fgets(a,100,data);
		//printf("%s",a);
		fwrite(a, sizeof(a), 1, foup);
	}
	//fread (a, sizeof(a), 1, foup);
	printf("%s",a);
	fclose(data);
}
