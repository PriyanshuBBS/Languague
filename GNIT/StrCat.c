#include <stdio.h>
#include <string.h>

int main () {
   char A[50] = {"Priyanshu"}, B[50]={"Dhal"};
   
   printf("1st String: %s\n",A);
   printf("2nd String: %s\n",B);

   strcat(A,B);

   printf("\nString after Concatenate: %s\n", A);
   
   return(0);
}