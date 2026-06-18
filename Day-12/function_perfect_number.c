#include<stdio.h>
void perfect_number();
int main()
{
     perfect_number();
    return 0;
}
void perfect_number() 
{ 
    int n ,i,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;

        }
    }   
        if(sum==n)
        {
            printf("%d is a perfect number",n);
        }
        else
        {
            printf("%d is not a perfect number",n);
        }

}