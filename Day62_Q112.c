#include <stdio.h>
int main() {
    int n, a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    long long current = a[0], best = a[0];
    for (int i = 1; i < n; i++) {
        if (current < 0) current = a[i];   // drop a negative running sum
        else current += a[i];
        if (current > best) best = current;
    }
    printf("%lld", best);
    return 0;
}