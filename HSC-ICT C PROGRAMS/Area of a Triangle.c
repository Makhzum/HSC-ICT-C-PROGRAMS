/* C program to find area of a triangle if base and height are given */

#include <stdio.h>

int main()
{
    float B, H, AREA;

    /* Input base and height of triangle */
    printf("Enter base of the triangle: ");
    scanf("%f", &B);
    printf("Enter height of the triangle: ");
    scanf("%f", &H);

    /* Calculate area of triangle */
    area = (B * H) / 2;

    /* Print the resultant area */
    printf("Area of the triangle = %.2f sq. units", AREA);

    return 0;
}
