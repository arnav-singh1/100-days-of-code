#include <stdio.h>
int main() {
    int n, a[1000], k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    for (int i = 0; i + k <= n; i++) {
        int ans = 0;
        for (int j = i; j < i + k; j++) {
            if (a[j] < 0) {
                ans = a[j];
                break;
            }
        }
        if (i > 0) printf(" ");
        printf("%d", ans);
    }
    return 0;
}