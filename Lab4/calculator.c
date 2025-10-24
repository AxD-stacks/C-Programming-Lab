#include<stdio.h>
int main()
{
    float num1, num2, result;
    int oprtr;
    printf("\n\nArithmatic calculator\n\n");
    printf("Enter the two operands:\n");
    scanf("%f%f",&num1, &num2);
    printf("ENTER\n 1 for addition\n 2 for subtraction\n 3 for division\n 4 for multiplication\n");
    scanf("%d",  &oprtr);
    switch(oprtr)
    {
        case 1:
            result=num1+num2;
            printf("the result is :%f\n", result);
            break;
        case 2:
            result=num1-num2;
            printf("the result is: %f\n", result);
            break;
        case 3:
            if(num2==0)
            {
                printf("Not defined");
                break;
            }
            else
            {
                result=num1/num2;
                printf("the result is: %f\n", result);
                break;
            }
        case 4:
            result=num1*num2;
            printf("The result is: %f\n", result);
            break;
        default:
            printf("Invalid operation");
    }
return 0;
}