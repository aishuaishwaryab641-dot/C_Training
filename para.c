//Write a function which will accept two input parameters x,y and returns x^2+y^2
#include <stdio.h>
int sum_of_squares(int x, int y) {
    return (x * x) + (y * y);
}

int main() {
    int x, y;
    
    printf("Enter value of x: ");
    scanf("%d", &x);
    
    printf("Enter value of y: ");
    scanf("%d", &y);
    
    int result = sum_of_squares(x, y);
    printf("x^2 + y^2 = %d\n", result);

    return 0;
}