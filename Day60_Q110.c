#include <stdio.h>
int main() {
    int n, a[1000], k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    for (int i = 0; i + k <= n; i++) {
        int max = a[i];
        for (int j = i + 1; j < i + k; j++)
            if (a[j] > max) max = a[j];
        if (i > 0) printf(" ");
        printf("%d", max);
    }
    return 0;
}