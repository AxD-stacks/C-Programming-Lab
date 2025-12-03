#include<stdio.h>
int main()
{   int num, i;
    float sum=0, avg=0 ;
    printf("how many numbers to you want to add?\n");
    scanf("%d", &num);
    while(num<=0)
    {
        printf("Invalid input! Enter again\n");
        scanf("%d", &num);
    }
    float numb[num];
    printf("Enter the numbers\n");
    for(i=0;i<num;i++)
        scanf("%f", &numb[i]);
    for(i=0; i<num;i++)
    {
        sum=sum+numb[i];
        avg=sum/num;
    }
    printf("the sum and avg is %.2f, %.2f\n", sum, avg);
    return 0;

}
