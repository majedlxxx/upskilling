#include <stdio.h>

int main()
{

   FILE *fptr;
   fptr = fopen("/etc/shadow","r");
   fclose(fptr);
   return 0;
}
