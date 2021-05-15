/*A sequence of calls to this function split str into tokens, 
which are sequences of contiguous characters spearated by any of
 the characters that are part of delimiters.

On a first call, the function expects a C string as argument 
for str, whose first character is used as the starting location to 
scan for tokens. In subsequent calls, the function expects a null pointer
 and uses the position right after the end of last token as the new starting 
 location for scanning.

To determine the beginning and the end of a token, the function first scans 
from the starting location for the first character not contained in separator (which
 becomes the beginning of the token). And then scans starting from this beginning of
  the token for the first character contained in separator, which becomes the end of 
  the token.

This end of the token is automatically replaced by a null-character by the 
function, and the beginning of the token is returned by the function.
*/
#include<string.h>
#include<stdio.h>
int main ()
{
  int i=0;
  char str[] ="- This, a sample string. mu \"by ?de";
  char * pch;
  printf ("Splitting string \"%s\" into tokens:\n",str);
  pch = strtok (str," ,.-?\"");
  while (pch != NULL)
  {
	printf ("%s,%i\n",pch,i++);
    pch = strtok (NULL, " ,.-?\"");
    //int i++;
  }
  return 0;
}
