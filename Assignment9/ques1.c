//WAP WHICH TAKES THE MONTH NUMBER AS A INPUT AND DISPLAY NUMBER OF DAYS IN THAT MONTH.
#include<stdio.h>

int main()
{
    int month_num;
    printf("Enter the month number:");
    scanf("%d",&month_num);
    switch(month_num)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
           printf("31 days");
           break;
        case 4:
        case 6:
        case 9:
        case 11:
           printf("30 days");
           break;
        case 2:
           printf("28/29 days");
           break;
        default:
           printf("Invalid input! Please enter month number between 1-12");
    }
    return 0;
}