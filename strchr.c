#include <stdio.h>
#include<string.h>
//untuk menampilkan alfabet tertentu, dari alfhabet pertama muncul
int main() {
  char *s;
  char buf [] = "This is a test EXAM";//two

  s = strchr (buf, 't');

  if (s != NULL)
    printf ("found a 't' at %s\n", s);

  return 0;
}
