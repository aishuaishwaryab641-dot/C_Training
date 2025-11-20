#include <stdio.h>
const float pi= 3.14159;   
float perimeter(float r) 
{
    return 2 * pi * r;
}

int main() 
{
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Perimeter of the circle = %.2lf\n", perimeter(radius));

    return 0;
}