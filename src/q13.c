#include <stdio.h>
int main() {
    int i = 2, sum = 0;
    while (i <= 50) {
        sum += i;
        i += 2;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
