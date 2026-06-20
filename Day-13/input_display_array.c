#include<stdio.h>
int main(){
int i;
int a[5],n;
printf("Enter the number of elements: ");
scanf("%d", &n);
printf("enter the elements of the array");
for(i=1;i<=n;i++)
{
  scanf("%d", &a[i]);
}
printf("Array elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

