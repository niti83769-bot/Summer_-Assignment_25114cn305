#include <stdio.h>
int main() 
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int temp, i;

    temp = arr[n - 1];
    for (i = n - 1; i > 0; i--) 
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = temp;
    printf("Right rotated array: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
} 
