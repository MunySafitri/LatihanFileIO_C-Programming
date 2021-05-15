#include <stdio.h>
#include<stdlib.h>
int main (void){
 int a, sum = 0;
 FILE *ifp, *ofp;
 ifp = fopen("input_file.txt", "r");
 if(ifp==NULL){
		printf("\nError: Cannot open file");
		exit(1);
	}
 ofp = fopen("output_file.txt", "w");
 while (fscanf(ifp,"%d",&a)==1){
 sum += a;
 }
 fprintf(ofp, "Jumlah = %d\n",sum);
 fclose(ifp);
 fclose(ofp);
 return 1;
} 
