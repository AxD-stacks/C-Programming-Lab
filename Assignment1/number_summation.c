#include<stdio.h>
int main()
{
    int num, sum;
    printf("Enter the number:\n");
    scanf("%d", &num);
    temp=num*(num+1);
    sum=temp/2;
    printf("The summation of first %d natural numbers is: %d\n", num, sum);
    return 0;

}
