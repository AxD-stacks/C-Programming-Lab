#include<stdio.h>
int main()
{
    float temp;
    printf("Enter the temperature of your machine in Celsius:\n ");
    scanf("%f", &temp);
    if (temp<=80 && temp>60)
        printf("Your machine is within safe limits.\n");
    else
        printf("Warning! Your machine temperature is out of safe range \n");
    return 0;
}