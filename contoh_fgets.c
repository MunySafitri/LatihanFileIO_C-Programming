#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[50];
    FILE *fp;
    fp = fopen("input.txt", "r");

    if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    printf("Testing fgets() function: \n\n");
    printf("Reading contents of myfile.txt: \n\n");

    while( fgets(str, 30, fp) != NULL )
    {
        puts(str);
    }

    fclose(fp);

    return 0;
}

