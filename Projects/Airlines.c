#include <stdio.h>
#include <string.h>
// #include<stdlib.h>

void del_bom(void);
void bbi_del(void);
void del_blr(void);
void Passenger();

int main()
{

    char src[10], des[10];
    char del[5] = "DEL", bom[5] = "BOM", blr[5] = "BLR", bbi[5] = "bbi";
    char buf[15];
    int FNo;

    printf("\n\n\t\t ************     Airlines Reservation System [Priyanshu, Mayank & Gaurav]  ************ \n\n");
    printf("Available Routes : 1. Delhi(DEL) - Mumbai(BOM)  2. Delhi(Del) - Bangalore(BLR)  3. Bhubaneswar(BBI) - Delhi(DEL)\n\n");

    printf("Source: ");
    gets(src);
    printf("Destination: ");
    gets(des);

    printf("Date of Journey: ");
    gets(buf);

    if (strcmp(src, del) == 0 && strcmp(des, bom) == 0)
    {
        del_bom();
    }

    else if (strcmp(src, bbi) == 0 && strcmp(des, bom) == 0)
    {
        bbi_del();
    }

    else if (strcmp(src, del) == 0 && strcmp(des, blr) == 0)
    {
        del_blr();
    }

    printf("Enter Flight Number: ");
    scanf("%d", &FNo);
    int age;
    char name[20];
    char gender;
    int mobile[10];

    printf("Name: ");
    scanf("%s", &name);

    printf("Age: ");
    scanf("%d", &age);

    printf("Gender: ");
    scanf("%d", &gender);

    printf("\nSelect Payment Mode: \n 1. Debit/Credit Card \n 2. UPI\n 3. Netbanking\n");

    printf("\n *********** Payment Sucessfull ******** \n");
    printf("\nPrinting Ticket Details ...........\n\n");

    printf("\t\tSource : %s\t\t Destination : %s   Flight Number : %d\n", src, des, FNo);
    printf("\nPassenger Details\n");
    printf("Name %s\t Age %d\t Gender %c\n", name, age, gender);

    // Passenger();    //Passenger Details

    return 0;
}

void Passenger()
{
}

void del_bom(void)
{
    printf("\n\t   Fligt No.\t   Airlines \t         Time          \t Fare\n");
    printf("\t    AI 665  \t  Air India \t   8:00 AM - 10:10 AM  \t 4,300\n");
    printf("\t    UK 993  \t   Vistara  \t   1:00 PM -  3:00 PM  \t 4,500\n");
    printf("\t   6E 6261  \t    Indigo  \t   7:45 PM - 10:00 PM  \t 4,800\n\n");
}

void bbi_del(void)
{
    printf("\n\t Fligt No.\t   Airlines \t      Time         \t Fare\n");
    printf("\t    UK 782  \t   Vistara  \t   20:30 - 22:40   \t 4,300\n");
    printf("\t   6E 2046  \t    Indigo  \t   19:30 - 21:45   \t 4,300\n");
    printf("\t   AI 474   \t  Air India \t   21:30 - 23:40   \t 4,100\n\n");
}

void del_blr(void)
{
    printf("\n\t Fligt No.\t   Airlines \t      Time        \t Fare\n");
    printf("\t    AI 665  \t  Air India \t   8:00 - 10:10   \t 4,300\n");
    printf("\t    UK 993  \t   Vistara  \t  13:00 - 15:00   \t 4,500\n");
    printf("\t   6E 6261  \t    Indigo  \t  19:45 - 22:00   \t 4,800\n\n");
}