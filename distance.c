#include <stdio.h>
#include <math.h>
void main()
{
    int x1,y1,x2,y2;
    printf("Enter the values of x1,y1:");
    scanf("%d%d", &x1,&y1);
    printf("Enter the values of x2,y2:");
    scanf("%d%d", &x2,&y2);
    float distane = sqrt(x2-x1*x2-x1+y2-y1*y2-y1);
    printf("distance is %f");
}