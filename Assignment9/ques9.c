//WAP to convert even number into its upper nearest odd number using switch statement.

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    switch(n%2==0)
    {
        case 1:
               printf("%d",n+1);
               break;
        case 0:
                printf("%d",n);
                break;
    }
    return 0;
}