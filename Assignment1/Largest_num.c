#include<stdio.h>
int main()
{
    int num1, num2,  num3, lrgst;
    printf("Enter the first number:\n");
    scanf("%d", &num1);
    printf("Enter the second number:\n");
    scanf("%d", &num2);
    printf("Enter the third number:\n");
    scanf("%d", &num3);
    if(num1>=num2 && num1>=num3)
        lrgst=num1;
    else if(num2>=num1 && num2>=num3)
        lrgst=num2;
    else
        lrgst=num3;
    printf("The largest number among %d, %d and %d is:  %d\n", num1, num2, num3, lrgst);
    return 0;
}