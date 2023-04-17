//WAP WHICH TAKES THE DAY NUMBER OF A WEEK AND DISPLAYS A UNIQUE GREETING MESSAGE FOR THE DAY.
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the day number:\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
              printf("I am best!");
              break;
        case 2:
              printf("I can do it!");
              break;
        case 3:
              printf("God is always with me!");
              break;
        case 4:
              printf("I love myself!");
              break;
        case 5:
              printf("Keep going on!");
              break;
        case 6:
              printf("Be happy & satisfied!");
              break;
        case 7:
              printf("Believe in yourself!");
              break;
        default:
              printf("Invalid input!");
              break;
    }
    
    return 0;
}