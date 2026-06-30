#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int temp, i;

    temp = arr[0];

    for (i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = temp;

    printf("Left rotated array: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}