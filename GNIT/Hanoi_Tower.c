#include <stdio.h>

void towerOfHanoi(int, char, char, char);

int main()
{
    int n;

    printf("The Number of disks are: ");
    scanf("%d", &n); // Number of disks

    printf("\nThe operations in Hanoi Tower for %d disks are \n", n);

    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods

    return 0;
}

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 0)
    {
        return;
    }

    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);

    printf("Move disk %d from rod %c to rod %c \n", n, from_rod, to_rod);

    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}