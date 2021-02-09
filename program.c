#include <stdio.h>

char calcModulus(long nr);

int main () {

   /* local variable definition */
  
  
   long startnr = 800057896949;
   long endnr = 800058896948;
   char ret;
   long validNPNCounter = 0;
FILE *fp;

   fp = fopen("./output.txt", "w+");



    long i;
for (i = startnr; i < endnr; i++)
{
     ret = calcModulus(i);
 
 if((int)ret == 0){
     //Print to CLI
  // printf( "NPN : %lu is valid if 0: %d\n", i, ret );
fprintf(fp, "NPN : %lu is valid: %d\n", i, ret );
validNPNCounter ++;
}
 int fclose( FILE *fp );
}

 printf( "valid NPNs : %lu\n", validNPNCounter);
 
   return 0;
}

char calcModulus(long nr){
unsigned int result = 0, position = 0;
for(long current = nr / 10; current; current /= 10){
result += (current % 10) * (position % 7 + 2);
position++;
}
return (10 - result % 11) % 10;
}