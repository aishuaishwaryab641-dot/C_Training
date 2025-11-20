#include <stdio.h>

int volume(int l, int b, int h) {
    return l * b * h;
}

int main() {
    int l, b, h;

    printf("Enter length: ");
    scanf("%d", &l);

    printf("Enter breadth: ");
    scanf("%d", &b);

    printf("Enter height: ");
    scanf("%d", &h);

    int result = volume(l, b, h);
    printf("Volume = %d\n", result);

    return 0;
}