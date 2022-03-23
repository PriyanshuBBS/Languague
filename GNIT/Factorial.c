#include <stdio.h>
#include <conio.h>

void fact(int n) // Function for Factorial
{
    int factorial = 1, i;
    for (i = 2; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial of %d is %d \n", n, factorial);
}

void div(int d, int r, int q) // Function for Divisor
{
    if (r == 0)
    {
        printf("Divisor is %f \n", d / q);
    }
    else
    {
        printf("Divisor is %f \n", (d - r) / q);
    }
}

int main()
{
    int a, n, Divt, Rem, Quo;
    printf("1. Factorial    2. Divisor \n");
    scanf("%d", &a);

    if (a == 1)
    {
        printf("Enter Number for Factorial\n");
        scanf("%d", &n);
        fact(n);
    }
    else if (a == 2)
    {
        printf("Enter Divident,Remainder, Quoteint of the Number\n");
        scanf("%d", &Divt);
        scanf("%d", &Rem);
        scanf("%d", &Quo);
        div(Divt, Rem, Quo);
    }
    else
    {
        printf("Error: Enter Valid Input\n");
    }
    getch();
    return 0;
}
