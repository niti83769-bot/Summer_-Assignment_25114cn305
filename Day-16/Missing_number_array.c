#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 8,7,4,6};
    int n = 8;  
    int sum = 0, total, i;
    for(i = 0; i < n - 1; i++)
     {
        sum =sum+ arr[i];
    }
    total = n * (n + 1) / 2;

    printf("Missing number = %d", total - sum);

    return 0;
}