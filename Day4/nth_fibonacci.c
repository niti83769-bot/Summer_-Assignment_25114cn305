#include <stdio.h>
int main() {
    int n, a = 0, b = 1, sum;

    printf("Enter n: ");
    scanf("%d", &n);
6
    if (n == 1)
     {
        printf("Nth Fibonacci number = %d", a);
     }  
    else if (n == 2) 
    {
        printf("Nth Fibonacci number = %d", b);
    }
    else 
    {
        for (int i = 3; i <= n; i++)
         {
            sum= a + b;
            a = b;
            b = sum;
        }
        printf("Nth Fibonacci number = %d", b);
    }

    return 0;
}
