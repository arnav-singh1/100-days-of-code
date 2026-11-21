#include <stdio.h>
int main() {
    long long n, temp;
    int digits = 0;
    scanf("%lld", &n);
    temp = n;
    if (n == 0) digits = 1;
    while (temp > 0) { digits++; temp /= 10; }

    long long p = 1;
    for (int i = 1; i < digits; i++) p *= 10;

    while (p > 0) {
        int d = (n / p) % 10;
        printf("%d", 1 - d);
        p /= 10;
    }
    return 0;
}