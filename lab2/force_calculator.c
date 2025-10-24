#include<stdio.h>
int main()
{
    float force, mass, acc;                           
    printf("Enter mass of the object in kg:\n");
    scanf("%f", &mass);
    printf("Enter the acceleration of the object in m/s^2:\n");
    scanf("%f", &acc);
    force=mass*acc;
    printf("The force would be equal to %f N", force);
    return 0;

}
