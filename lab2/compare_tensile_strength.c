#include<stdio.h>
int main()
{
    float material1, material2;
    printf("Enter the tensile strength of material 1 in mpa:\n ");
    scanf("%f", &material1);
    printf("Enter the tensile strength of material 2 in mpa:\n ");
    scanf("%f", &material2);
    if (material1 > material2)
        printf("Material 1 has greater tensile strength.\n");
    if (material2 > material1)
        printf("Material 2 has greater tensile strength.\n");
    if (material1 == material2)
        printf("Both materials have equal tensile strength.\n");
    return 0;
}