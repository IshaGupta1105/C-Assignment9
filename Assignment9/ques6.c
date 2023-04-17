//WAP TO CHECK WHETHER A YEAR IS A LEAP YEAR OR NOT.USING SWITCH STATEMENT
#include<stdio.h>

int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    switch(year%100==0)
    {
        case 0:
               switch(year%4==0)
               {
                case 0:
                       printf("Non Leap Year\n\n");
                       break;
                case 1:
                       printf("Leap Year\n\n");
                       break;
               }
               break;
               
        case 1:
               switch(year%400==0)
               {
                case 0:
                       printf("Non Leap Year\n\n");
                       break;
                case 1:
                       printf("Leap Year\n\n");
                       break;
               }
    }
    return 0;
}