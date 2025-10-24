#include<stdio.h>
int main()
{
    int year, temp;
    printf("Enter year:\n");
    scanf("%d", &year);
    temp=year;
    if(temp%4==0 && temp%100!=0)
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);
    return 0;

}
