//Write a menu driven program with the following option:
// a.check whether a given set of three numbers are lengths of isoceles triangle or not.
// b.check whether a given set of three numbers are lengths of right angled triangle or not.
// c.check whether a given set of three numbers are lengths of equilateral triangle or not.
// d.exit
#include<stdio.h>

int main()
{
    int a,b,c,choice;
    while(1)
    {
        
        printf("1.Isoceles triangle\n");
        printf("2.Right angled triangle\n");
        printf("3.Equilateral triangle\n");
        printf("4.Exit\n");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
                  printf("Enter the length of side of triangle:\n");
                  scanf("%d %d %d",&a,&b,&c);
                  if(a==b||b==c||c==a)
                  printf("Isoceles triangle\n");
                  else
                  printf("Not isoceles triangle\n");
                  break;
            case 2:
                  printf("Enter the length of side of triangle:\n");
                  scanf("%d %d %d",&a,&b,&c);
                  if(a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b)
                  printf("Right angled triangle\n");
                  else
                  printf(" Not Right angled triangle\n");
                  break;
            case 3:
                   printf("Enter the length of side of triangle:\n");
                    scanf("%d %d %d",&a,&b,&c);
                    if(a==b&&b==c)
                    printf("Equilateral triangle\n");
                    else
                     printf("Not Equilateral triangle\n");
                  break;
            case 4:
                  return 0;
                  break;
        }
    }
    return 0;
}