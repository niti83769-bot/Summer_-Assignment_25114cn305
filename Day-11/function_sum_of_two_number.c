#include<stdio.h>
void sum();
int main()
{
    sum();
    return 0;
}
void sum()
{
    int sum ,a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d", sum);
}


