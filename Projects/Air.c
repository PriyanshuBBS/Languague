#include<stdio.h>
#include<string.h>
typedef struct air_plane_ticket
{
    char name[100];
    int code;
    int seat;

} tic;


int main(int argc, char const *argv[])
{
    int n;
    tic per[n];
   
    printf("Enter the number of Passengers: ");     // Entering Number of Passengers
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("make ticket of per[%d]\n", i);
        printf("ticket name of [%d]\n", i);
        scanf("%s", &per[i].name);

         printf("ticket code of [%d]\n", i);
        scanf("%d", &per[i].code);

        printf("ticket seat no. of [%d]\n", i);
        scanf("%d", &per[i].seat);
        
        printf("\n");
}

 for (int i = 0; i < n; i++)
    {
        printf(" ticket of per[%d]\n", i);
        printf("ticket name of [%d] is %s", i, per[i].name);
       
         printf("ticket code of [%d] is %d\n", i, per[i].code);
       
        printf("ticket seat no. of [%d] is %d", i, per[i].seat);
        
        
        printf("\n");
}

    return 0;
}
