#include <stdio.h>
#include <stdlib.h>

int *input()
{
    int i, *ptr;

    ptr = (int *)malloc(5 * sizeof(int));
    printf("Enter 3 numbers: ");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", ptr + i);
    }

    return ptr;
}

int main()
{
    int i, sum = 0;
    int *ptr = input();

    for (i = 0; i < 3; i++)
    {
        sum += *(ptr + i);
    }

    printf("The Sum of Numbers are : %d\n", sum);
    
    free(ptr);
    ptr = NULL;

    return 0;
}