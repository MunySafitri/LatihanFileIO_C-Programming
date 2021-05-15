#include<stdio.h>
#include<stdlib.h>
char *strcat(char *first,
 char *second)
{
 char *p;
 p =first;
 while (*p++) ;
 --p;
 while (*p++ = *second++) ;
 return first;
 } 
 char strA[80] = "Sebuah string untuk tujuan demo";
char strB[80];
int main(void) {
 char *pA; /* sebuah pointer ke character */
 char *pB; /* sebuah pointer ke character */
 puts(strA); /* print string A */
 pA = strA; /* pointer pA tunjuk ke string A */
 puts(pA); /* tampilkan yang ditunjuk pA */
 pB = strB; /* pointe pB tunjuk ke string B */
 putchar('\n'); /* buat baris baru */
 /* selama *pA tidak '\0' tidak null */
 while(*pA != '\0')
 {
 *pB++ = *pA++;
 }
 *pB = '\0'; /* beri null string kepada strB */
 puts(strB); /* print string B */
 return EXIT_SUCCESS;
}
