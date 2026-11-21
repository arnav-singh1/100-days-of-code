#include <stdio.h>
int main() {
    int n, temp, digits = 0;
    long long sum = 0;
    scanf("%d", &n);
    temp = n;
    while (temp > 0) { digits++; temp /= 10; }
    temp = n;
    while (temp > 0) {
        int d = temp % 10;
        long long p = 1;
        for (int i = 0; i < digits; i++) p *= d;
        sum += p;
        temp /= 10;
    }
    if (sum == n) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}