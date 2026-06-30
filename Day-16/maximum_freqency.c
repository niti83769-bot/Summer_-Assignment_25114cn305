#include <stdio.h>

int main() {
    int arr[] = {1, 1, 2, 3, 1, 4, 1};
    int n = 7;

    int maxFreq = 0, element = arr[0];

    for (int i = 0; i < n; i++)
     {
        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j])
             {
                count++;
            }
    }

        if (count > maxFreq) 
        {
            maxFreq = count;
            element = arr[i];
        }
    }

    printf("Element with maximum frequency: %d\n", element);
    printf("Frequency: %d\n", maxFreq);

    return 0;
}