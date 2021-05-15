#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char akun[20]="muny@safitri";
	char *str[3];
	char username[20],pass[20];
	int ctrl=0;
	str[0]=strtok(akun,"@");
	while(str[ctrl++]!=NULL){
		str[ctrl]=strtok(NULL,"@");
		printf("%i\n",ctrl);
	}
	strcpy(username,str[0]);
	strcpy(pass,str[1]);
	printf("username :%s",username);
	printf("pass : %s",pass);
}
