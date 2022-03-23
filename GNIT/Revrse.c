#include <stdio.h>
#include <string.h>

int main()
{
   char s[100];

   printf("Enter String: ");
   gets(s);

   strrev(s);

   printf("Reverse of string: %s\n", s);

   return 0;
}