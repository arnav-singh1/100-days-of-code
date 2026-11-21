#include <stdio.h>
int main() {
    int n, a[1000], x, pos = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);   // element to delete (first occurrence)
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            pos = i;
            break;
        }
    }
    if (pos == -1) {
        printf("Element not found");
        return 0;
    }
    for (int i = pos; i < n - 1; i++) a[i] = a[i + 1];
    n--;
    for (int k = 0; k < n; k++) {
        if (k > 0) printf(" ");
        printf("%d", a[k]);
    }
    return 0;
}