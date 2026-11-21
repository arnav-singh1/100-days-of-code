#include <stdio.h>
int main() {
    int n, a[1000], r[1000], k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    k = k % n;
    for (int i = 0; i < n; i++) r[(i + k) % n] = a[i];
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", r[i]);
    }
    return 0;
}