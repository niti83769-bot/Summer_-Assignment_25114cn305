#include<stdio.h.>
int main() {
    int num,sum=0,r;
    printf("enter a number:");
    scanf("%d",&num);
    while(num!=0)
    r=num%10;
    sum=sum*10+r;
    num=num/10;
    printf("reverse of the number is: %d", sum);
    return 0;

}