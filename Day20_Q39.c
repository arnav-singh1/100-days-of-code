#include <stdio.h>
int main() {
    int n;
    long long prod = 1;
    scanf("%d", &n);
    while (n > 0) {
        int d = n % 10;
        if (d % 2 != 0) prod *= d;
        n /= 10;
    }
    printf("%lld", prod);
    return 0;
}