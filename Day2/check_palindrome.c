#include <stdio.h>
int main(){
    int r,temp,num, sum= 0;
    printf("enter anumber:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    if(num==sum)
    {
        printf("%d is a palindrome number",num);
    }
    else
    {
        printf("%d is not a palindrome number",num);
    }
    return 0;
}