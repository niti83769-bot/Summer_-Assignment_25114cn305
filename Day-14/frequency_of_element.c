#include <stdio.h>

int main()
{
    int a[100], n, i, search, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to find frequency: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(a[i] == search)
        {
            count++;
        }
    }

    if(count > 0)
    { 
        printf("Frequency of %d = %d", search, count);
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}