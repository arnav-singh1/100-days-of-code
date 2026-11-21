#include <stdio.h>
int main() {
    int n, a[1000], k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    if (k < 1 || k > n) {
        printf("-1");
        return 0;
    }
    for (int i = 1; i < n; i++) {      // insertion sort
        int key = a[i], j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    printf("%d", a[k - 1]);
    return 0;
}