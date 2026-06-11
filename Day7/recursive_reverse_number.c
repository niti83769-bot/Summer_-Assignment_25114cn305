#include<stdio.h>
int reverse_number(int n)
{
    if(n==0)
    {
        return 0;
    }
    return (n%10)*10 + reverse_number(n/10);
}
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("reverse of the number is %d",reverse_number(n));
    return 0;
}