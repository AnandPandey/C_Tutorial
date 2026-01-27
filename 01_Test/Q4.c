#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main() {
    unsigned x;
    int p, n;

    printf("Enter x, p, n: ");
    scanf("%u %d %d", &x, &p, &n);

    printf("Result: %u\n", invert(x, p, n));
    return 0;
}

unsigned invert(unsigned x, int p, int n) {
    return x ^ (((1 << n) - 1) << (p - n + 1));
}
