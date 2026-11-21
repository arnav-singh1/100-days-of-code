#include <stdio.h>
int main() {
    int n, a[1001], x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    int i = n - 1;
    while (i >= 0 && a[i] > x) {   // shift larger elements right
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = x;
    n++;
    for (int k = 0; k < n; k++) {
        if (k > 0) printf(" ");
        printf("%d", a[k]);
    }
    return 0;
}