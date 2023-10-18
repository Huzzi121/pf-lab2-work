#include <stdio.h>
int main()
{
    double dollar,fee;

    printf("enter the amount of dollars you want to convert:");
        scanf("%lf",&dollar);
    
    fee=dollar*(10/100);
    printf("your fee for the exchange is %lf%%",fee);

    double pound=dollar*0.79;
    double japanese=dollar*127.65;

    printf("you get:\n%lf GBP\n%lf JPY",pound,japanese);
}