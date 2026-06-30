#include<stdio.h>
void  factorial();
int main()
{
    factorial();
    return 0;
}
void factorial()
{
    int n, fact=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        fact = fact * i;
    } 
    printf("Factorial of %d = %d", n, fact);
}