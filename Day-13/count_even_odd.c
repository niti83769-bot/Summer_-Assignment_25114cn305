#include <stdio.h>
int main()
{
   int a[10] ,i, odd=0, even=0,n;

   printf("Enter the number of elements: ");
   scanf("%d", &n);

   printf("enter the elements of the array:");
   for(i=0;i<n;i++)
   {
      scanf("%d", &a[i]);
   }
   for(i = 0; i < n; i++)
    {
      
        if( a[i]/2==0)
        {
          even++;
        }

        if( a[i]/2 !=0)
        {
          odd ++;
        }
    }
         printf("Number of even elements = %d\n", even);
         printf("Number of odd elements = %d\n", odd);

    return 0;
} 
    