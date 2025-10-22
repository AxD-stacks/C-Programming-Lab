#include<stdio.h>
int main()
{
    float app_strs, mat_strgth, fos;
    printf("Enter the applied stress mpa:\n ");
    scanf("%f", &app_strs);
    printf("Enter the material yield strength in mpa:\n ");
    scanf("%f", &mat_strgth);
    fos= mat_strgth/app_strs;
    if (fos>=2.0)
        printf("Safe design.\n");
    else if (fos<2.0 && fos>=1.5)
        printf("Acceptable with monitoring.\n");
    else
        printf("Both materials have equal tensile strength.\n");
    return 0;
}