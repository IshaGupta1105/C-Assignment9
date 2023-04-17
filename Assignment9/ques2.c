//WRITE A MENU DRIVEN PROGRAM WITH THE FOLLOWING OPTIONS:
// 1. ADDITION
// 2. SUBTRACTION
// 3. MULTIPLICATION
// 4. DIVISION
// 5. EXIT
#include<stdio.h>
int main()
{
    int choice,x,y,z;
    while(1)
    {
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter the two number:\n");
        scanf("%d %d",&x,&y);
        z=x+y;
        printf("Addition= %d\n",z);
        break;

        case 2:
        printf("Enter the two number:\n");
        scanf("%d %d",&x,&y);
        z=x-y;
        printf("Subtraction= %d\n",z);
        break;

        case 3:
        printf("Enter the two number:\n");
        scanf("%d %d",&x,&y);
        z=x*y;
        printf("Multiplication= %d\n",z);
        break;

        case 4:
        printf("Enter the two number:\n");
        scanf("%d %d",&x,&y);
        z=x/y;
        printf("Division= %d\n",z);
        break;

        case 5:
        return 0;
        break;
        
    }
    }
    return 0;
}