#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float Sum = 0, a, r;
    int n;

    printf("Enter 1st Element of Series & Common Ratio \n");
    scanf("%f %f", &a, &r);

    printf("Enter the Number of Terms: ");
    scanf("%d",&n);

    if(r<1){
        printf("Geomertric Sum of Series is %f \n", (a*(1-pow(r,n)))/(1-r) );
    }

    else if(r>1){
        printf("Geomertric Sum of Series is %f \n", ( a*(pow(r,n))-1)/(r-1) );
    }

    else{
        printf("Not Geometric Progression Series \n");
    }

    return 0;
    getch();
}