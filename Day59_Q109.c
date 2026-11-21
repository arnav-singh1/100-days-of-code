#include <stdio.h>
int main() {
    int n, a[1000], k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    if (k > n || k <= 0) {
        printf("-1");
        return 0;
    }
    long long sum = 0, best;
    for (int i = 0; i < k; i++) sum += a[i];
    best = sum;
    for (int i = k; i < n; i++) {      // slide the window by one
        sum += a[i] - a[i - k];
        if (sum > best) best = sum;
    }
    printf("%lld", best);
    return 0;
}