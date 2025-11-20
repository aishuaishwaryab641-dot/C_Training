#include <stdio.h>
void swap (float b1, float b2)
{
    printf("Before Hacking:A has %f B has %f\n",b1,b2);
    float temp = 0;
    temp = b1;
    b1= b2;
    b2= temp;
    printf("After Hacking:A has %f B has %f",b1,b2);
}
void main()
{
    float b1, b2 ;
    printf("Enter b1,b2: ");
    scanf("%f%f",&b1,&b2);
    swap(b1,b2);
}