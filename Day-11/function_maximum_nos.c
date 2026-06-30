#include<stdio.h>
void max();
int main()
{
    max();
    return 0;
}
void max()
{
    int max, a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a > b)
        max = a;
    else
        max = b;
    
    printf("Maximum = %d", max);
}


