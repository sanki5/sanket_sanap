/*this is program to change the case of sentence*/

#include <stdio.h>

int main ()
{
   /*
    The ASCII codes for a-z are 97-122.
    The ASCII codes for A-Z are 65-90.

   To get A from a, you need to subtract 32.
   To get a from A, you need to add 32.
   int c = 0;
   char ch, s[1000];   */

   printf("Input a string\n");
   gets(s);

   while (s[c] != '\0') {
      ch = s[c];
      if (ch >= 'A' && ch <= 'Z')
         s[c] = s[c] + 32;
      else if (ch >= 'a' && ch <= 'z')
         s[c] = s[c] - 32;
      c++;
   }

   printf("%s\n", s);

   return 0;
}
