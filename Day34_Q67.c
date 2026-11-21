#include <stdio.h>
int main() {
    int n, a[1001], pos, value;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d %d", &pos, &value);   // pos is 0-based index
    if (pos < 0 || pos > n) {
        printf("Invalid position");
        return 0;
    }
    for (int i = n; i > pos; i--) a[i] = a[i - 1];
    a[pos] = value;
    n++;
    for (int k = 0; k < n; k++) {
        if (k > 0) printf(" ");
        printf("%d", a[k]);
    }
    return 0;
}
