#include <stdio.h>
int main() {
    int n, x;
    long long sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        sum += x;
    }
    long long expected = (long long)n * (n + 1) / 2;   // sum of 0..n
    printf("%lld", expected - sum);
    return 0;
}