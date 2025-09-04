#include <stdio.h>
int main() {
    int n, i = 2, isPrime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (i <= n / 2) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
        i++;
    }

    if (n <= 1)
        printf("Not prime.\n");
    else if (isPrime)
        printf("Prime.\n");
    else
        printf("Not prime.\n");

    return 0;
}
