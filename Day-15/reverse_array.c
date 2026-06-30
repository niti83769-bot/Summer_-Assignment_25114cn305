#include <stdio.h>
int main() {
    int arr[5] = {10,20,30,40,50};
    int n = 5;
    int i, temp;
    for (i = 0; i < n / 2; i++)
     {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    
    printf("Reversed array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}