#include <stdio.h>
int main() {
    int n, temp, digits = 0;
    scanf("%d", &n);
    temp = n;
    while (temp > 0) { digits++; temp /= 10; }

    if (digits <= 1) { printf("%d", n); return 0; }

    long long p = 1;
    for (int i = 1; i < digits; i++) p *= 10;

    int last = n % 10;
    int first = n / p;
    long long middle = (n % p) / 10;

    long long result = last * p + middle * 10 + first;
    printf("%lld", result);
    return 0;
}