#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int i;
    int upper = 0, lower = 0, num = 0, special = 0;

    printf("Enter the string \n");
    gets(str);

    printf("\nThe length of String is %d\n",strlen(str));
    return 0;
}
