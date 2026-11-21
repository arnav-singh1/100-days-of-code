#include <stdio.h>
int main() {
    int n, a[1000], key;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);
    int low = 0, high = n - 1, index = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == key) {
            index = mid;
            break;
        } else if (a[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    if (index == -1) printf("-1");
    else printf("Found at index %d", index);
    return 0;
}