#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n, sum = 0;
    int a[3][2], b[2][3], Result[3][3];

    printf("Enter the 1st matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
            scanf("%d", &a[i][j]);
            
        }
        
    }

    printf("Enter the 2nd matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
            
        }
        
    }

    //Multiplying Matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            
            for (int k = 0; k < 3; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            Result[i][j] = sum;
            sum = 0;
        }
    }

    //Print the Multiplied matrix
    printf("\nMultiplied matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
            printf("%d \t", Result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
