#include <stdio.h>
int main() {
    int n, a[1000], target;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &target);
    int first = -1, last = -1, low = 0, high = n - 1;
    while (low <= high) {              // first occurrence (binary search)
        int mid = low + (high - low) / 2;
        if (a[mid] == target) {
            first = mid;
            high = mid - 1;
        } else if (a[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    low = 0;
    high = n - 1;
    while (low <= high) {              // last occurrence (binary search)
        int mid = low + (high - low) / 2;
        if (a[mid] == target) {
            last = mid;
            low = mid + 1;
        } else if (a[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    printf("%d, %d", first, last);
    return 0;
}