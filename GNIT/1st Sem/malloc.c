#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Enter the Number of Integers: ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int)); // Since don't know size of int hence sizeof() used

    if (ptr == NULL)
    { // If memory not alloted NULL will be returned
        printf("Memoray Allocation Failed !!! \n");
        exit(1);
    }

    printf("Enter Integer/s ");
    for (i = 0; i < n; i++)
    {
         scanf("%d", ptr + i); // Increasing ptr as it's in 1byte , No & as ptr is itself a address
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    printf("\n");

    return 0;
}