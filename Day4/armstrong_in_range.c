#include<stdio.h>
int main(){
    int start,end,num,original,rem,sum=0;
    printf("enter the start number:");
    scanf("d",start);
    printf("enter the ending number:");
    scanf("%d",end);
    printf("armstrong numbers between %d and %d are:",start,end);
     for(num=start;num<=end;num++)
    {
        original=num;
        sum=0;
        while(num!=0)
        {
            rem=num%10;
            sum=sum+rem*rem*rem;
            num=num/10;
        }

         if(sum==original)
         {
            printf("%d ",original);
         }
      return 0;
  }

