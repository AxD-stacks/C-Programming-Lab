#include<stdio.h>
int main()
{
    int unit;
    float bill;
    printf("Enter units consumed:\n");
    scanf("%d", &unit);
    if(unit<=100)
        bill=unit*1.5;
    else if(unit>100 && unit<=200)
        bill=(unit-100)*2 + (100*1.5);
    else if(unit>200 && unit<=300)
        bill=(unit-200)*3 + (100*2) + (100*1.5) ;
    else
        bill=(unit-300)*5 + (100*3) + (100*2) + (100*1.5);
    printf("Total electricity bill: %f\n", bill);
    return 0;
}