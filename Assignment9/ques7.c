//WAP to take the value from the user as input electricity unit charges and calculate total electricity bill according to the given condition.
// Using the switch statement.
// For the first 50 units Rs.0.50/unit.
// For the next 100 units Rs.0.75/unit.
// For the next 100 units Rs.1.20/unit.
// An additional surcharge of 20% is added to the bill.
#include<stdio.h>

int main()
{
    int unit;
    float total,finalTotal;
    printf("Enter the unit charges consumed:");
    scanf("%d",&unit);
    switch(50<unit)
    {
        case 1: // 50>unit
               switch(150<unit)
               {
                case 0: //51<unit<150
                        total=25+(unit-50)*0.75;
                        break;
                case 1:  //150>unit
                        total=25+75+(unit-100)*1.20;
                        break;

               }
               break;
        case 0:  // unit<50
                 total=unit*.5;
                 break;
    }
    finalTotal = total+total*0.2;
    printf("Total Amount = %f\n",finalTotal);
    return 0;
}