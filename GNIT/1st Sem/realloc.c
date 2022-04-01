#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not available\n");
        exit(1);
    }
    {
    printf("Enter Number: ");
    scanf("%d ", ptr);
    }
    // OMG one more integer needed

    ptr = (int *)realloc(ptr, 2 * sizeof(int)); // Memory for 1 more Int & changing ptr to new memory block

    if (ptr == NULL)
    {
        printf("Memory not available\n");
        exit(1);
    }
    {
    printf("Enter the other number: ");
    scanf("%d", ptr + 1);
    }
    printf("Elements are : ");
    printf("%d\n", *ptr);
    printf("%d\n", *(ptr+1));

    return 0;
}