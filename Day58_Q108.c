#include <stdio.h>
int main() {
    int n, a[1000], ans[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int prefix = 1;
    for (int i = 0; i < n; i++) {      // product of everything to the left
        ans[i] = prefix;
        prefix *= a[i];
    }
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) { // multiply by product of everything to the right
        ans[i] *= suffix;
        suffix *= a[i];
    }
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", ans[i]);
    }
    return 0;
}