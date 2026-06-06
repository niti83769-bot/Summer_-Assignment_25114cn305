#include<stdio.h>
int main(){
    int  n,a=0, b=1, c;
    printf("enter the numbers of terms:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    printf(" fibonacci series");
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
