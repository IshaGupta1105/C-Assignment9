//Program to convrt a positive number into a negative number and negative number into positive number using switch statement.

#include<stdio.h>

int main()
{
    int choice,number;
    printf("1.Convert positive to negative number\n");
    printf("2.Convert negative to positive number\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
               printf("Enter a positive number:\n");
               scanf("%d",&number);
               number=number*(-1);
               printf("Negative form of number is %d\n",number);
               break;
        case 2:
               printf("Enter a negative number:\n");
               scanf("%d",&number);
               number=number*(-1);
               printf("Positive form of number is %d\n",number);
               break;
        default:
                printf("Invalid input\n");
                break;
    }
    return 0;
}