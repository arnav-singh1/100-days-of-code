#include <stdio.h>
static int seen[100001];   // assumes values are between 0 and 100000
int main() {
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {      // single pass
        scanf("%d", &x);
        if (seen[x]) {
            printf("%d", x);
            return 0;
        }
        seen[x] = 1;
    }
    printf("-1");
    return 0;
}