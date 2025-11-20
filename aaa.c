#include <stdio.h>

int diffFirstLast(int arr[], int n) {
    if (n <= 0) {
        return 0;  
    }
    return arr[n - 1] - arr[0];
}

int main() {
    int arr[] = {5, 10, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    int diff = diffFirstLast(arr, n);
    printf("Difference = %d\n", diff);

    return 0;
}