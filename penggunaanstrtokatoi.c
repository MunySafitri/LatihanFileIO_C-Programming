#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int n, i;
    char cut[2] = ", ";
    char *token;

    printf("Masukkan Jumlah Mahasiswa: ");
    scanf("%d", &n);

    char data[n][100];
    int  n1[n], n2[n];

    for (i = 0; i < n; i++) {
        printf("Masukkan nama, nilai Algoritma, dan Nilai Pemrograman Mahasiswa %d : ", i+1);
        scanf(" %[^\n]s", data[i]);
        token   = strtok(data[i], cut);
        n1[i]   = atoi(strtok(NULL, cut));
        n2[i]   = atoi(strtok(NULL, cut));
    }
    
    printf("Nama\tRataan\n");

    for (i = 0; i < n; i++) {
        token = strtok(data[i], cut);
        printf("%s\t", token);
        printf("%.2f\n", (float) (n1[i] + n2[i]) / 2);
    }

    return 0;
}
