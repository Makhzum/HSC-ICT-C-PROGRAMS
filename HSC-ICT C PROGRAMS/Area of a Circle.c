/* C program to find area of a circle if radius is given */

#include <stdio.h>  
#define PI 3.14159  
  
int main() {  
    float radius, area;  
printf("Enter the radius of the circle: ");  
    scanf("%f", &radius);  
  
   if (radius <= 0) {  
        printf("Error: Please enter a positive value for radius.\n");  
        return 1;  
    }  
   area = PI * radius * radius;  
printf("The area of the circle is: %f\n", area);  
    return 0;  
}  
