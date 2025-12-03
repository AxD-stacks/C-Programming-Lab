#include<stdio.h>
int main()
{
    int  i;
    printf("The even numbers between 1 to 100 are: \n");
    for(i=2; i<100; i=i+2)
         printf("%d\n", i);
    return 0;
}