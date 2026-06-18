#include<stdio.h>
void fib();
int main()
{
    fib();
return 0;
}
void fib()
{
  int  n,a=0, b=1, c;
    printf("enter the numbers of terms:");
    scanf("%d",&n);
     printf(" fibonacci series");
    for(int i=1;i<=n;i++)
    
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    } 
     
}