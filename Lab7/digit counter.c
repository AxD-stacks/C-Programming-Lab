#include<stdio.h>
int main()
{
    int num, num2=1, i, count=0;
    printf("Enter the number\n");
    scanf("%d", &num);
    while(num2)
    {
        num2=num/10;
        count++;
    }
    return 0;
}