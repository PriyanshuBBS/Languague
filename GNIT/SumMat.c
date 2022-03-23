#include<stdio.h>   
int main()  
{  
    int i, j, A[10][10], B[10][10], Result[10][10]; 
 
    printf("Elements of A Matrix\n");  
    for (i = 0; i < 2; i++)  
        for (j = 0; j < 2; j++) 
        scanf("%d", & A[i][j]);  

    printf("Elements of B Matrix\n");  
    for (i = 0; i < 2; i++)  
        for (j = 0; j < 2; j++) 
        scanf("%d", & B[i][j]); 

    printf("Sum of Matrix\n");  
    for (i = 0; i < 2; i++)  
    {  
        for (j = 0; j < 2; j++)  
        {  
            Result[i][j] = A[i][j] + B[i][j];  
            printf("%d\t", Result[i][j]);  
        }  
        printf("\n");  
    }  
    return 0;  
}  
