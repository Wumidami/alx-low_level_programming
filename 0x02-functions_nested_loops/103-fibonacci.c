#include <stdio.h>

int main(void) {
    unsigned long long a = 1, b = 2, sum = 0, next;

    while (b <= 4000000) {
        if (b % 2 == 0) {
            sum += b;
        }

        next = a + b;
        a = b;
        b = next;
    }

    printf("%llu\n", sum);

    return 0;
}
