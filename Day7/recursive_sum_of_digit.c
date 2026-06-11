#include<stdio.h>
int sum_of_digit(int n)
{
    if(n==0)
    {
        return 0;
    }
     return (n%10) + sum_of_digit(n/10);
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("sum_of_digit is: %d", sum_of_digit(n));
    return 0;
}    