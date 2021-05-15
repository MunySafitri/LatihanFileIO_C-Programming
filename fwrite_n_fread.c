

//untuk menulis binary
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//fread
struct student{
	int rno;
	char name[10];
};
int main(){
	FILE *fp;
	struct student s;
	fp=fopen("tes.txt","wb");//wb
	if(fp==NULL){
		printf("\nError: Cannot open file");
		exit(1);
	}
	//fwrite(&s,sizeof(struct student),1,fp);//untuk mencetak binary ke file, tentunya tidak dapat dibaca
	
	printf("\n Enter Roll Number =");
	
	scanf("%d",&s.rno);
	//printf("\n%d",s.rno);
	printf("\nEnter name = ");
    //fflush(stdin);
	printf("\n%d",s.rno);
	gets(s.name);
	fwrite(&s,sizeof(struct student),1,fp);
	printf("\nData is stored successfully..\n");
	fclose(fp);
}

//untuk membaca file binary ke file bisa dibaca
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// //fread
// struct student{
// 	int rno;
// 	char name[10];
// };
// int main(){
// 	FILE *fp;
// 	struct student s;
// 	fp=fopen("tes.txt","rb");//wb
// 	if(fp==NULL){
// 		printf("\nError: Cannot open file");
// 		exit(1);
// 	}
// 	//fwrite(&s,sizeof(struct student),1,fp);//untuk mencetak binary ke file, tentunya tidak dapat dibaca
// 	fread(&s,sizeof(struct student),1,fp);//reads struct, membaca file binary
// 	printf("\n Enter Roll Number = %d",s.rno);
// 	printf("\n nama: %s\n",s.name);
	
	
// 	fclose(fp);
// }
