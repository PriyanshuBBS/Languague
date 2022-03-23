#include <stdio.h>
#include <string.h>
int main()
{
    char A[100], B[100];

    printf("Enter a string\n");
    gets(A);

    strcpy(B, A);

    printf("Source string: %s\n", A);
    printf("Destination string: %s\n", B);

    return 0;
}