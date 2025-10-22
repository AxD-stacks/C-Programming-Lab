#include<stdio.h>
int main()
{
    float mass, vel, ke;                            //vel for velocity, ke for kinetic energy
    printf("Enter mass of the object in kg:\n");
    scanf("%f", &mass);
    printf("Enter the velocity of the object in m/s:\n");
    scanf("%f", &vel);
    ke=0.5*mass*vel*vel;
    printf("The kinetic energy would be equal to %f J", ke);
    return 0;
}