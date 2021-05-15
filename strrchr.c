#include <stdio.h>
#include<string.h>
int main() {
  char *s;
  char buf []= "This is a testing.txt";

	s = strrchr (buf, '.');
//  s[1] = strrchr (buf, 't');
//  s[2] = strrchr (buf, 'x');
//  s[3] = strrchr (buf, 't');
  //if(s[0] s[1] s[2] s[3])

  
  if (s != NULL)
    printf ("found a 't' at %s\n", s);
    
  if(strcmp(s,".txt")==0){
  	printf("maka berhasil karna program adalah .txt");
  }

  return 0;
}//menampilkan alphabet teretentu dari alphabet terakhir muncul
