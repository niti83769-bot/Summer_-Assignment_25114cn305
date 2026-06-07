#include <stdio.h>

int main() {
    int n, num, largestPrime = -1;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        int isPrime = 1;

        if (num <= 1) {
            isPrime = 0;
        } else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime && num > largestPrime) {
            largestPrime = num;
        }
    }

    if (largestPrime == -1)
        printf("No prime number found.");
    else
        printf("Largest prime number = %d", largestPrime);

    return 0;
}
