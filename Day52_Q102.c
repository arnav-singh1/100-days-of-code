#include <stdio.h>
int main() {
    int n, a[1000], x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] >= x) {
            ans = mid;          // candidate, keep looking left for the first one
            high = mid - 1;
        } else low = mid + 1;
    }
    printf("%d", ans);
    return 0;
}