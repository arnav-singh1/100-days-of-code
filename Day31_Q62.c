#include <stdio.h>
int main() {
    int n, a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int i = 0, j = n - 1;
    while (i < j) {            // swap in place, no extra array
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
        i++;
        j--;
    }
    for (int k = 0; k < n; k++) {
        if (k > 0) printf(" ");
        printf("%d", a[k]);
    }
    return 0;
}