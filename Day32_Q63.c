#include <stdio.h>
int main() {
    int m, n, a[1000], b[1000], c[2000];
    scanf("%d", &m);
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    for (int i = 0; i < m; i++) c[i] = a[i];
    for (int i = 0; i < n; i++) c[m + i] = b[i];
    for (int i = 0; i < m + n; i++) {
        if (i > 0) printf(" ");
        printf("%d", c[i]);
    }
    return 0;
}