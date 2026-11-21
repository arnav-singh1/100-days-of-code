#include <stdio.h>
int main() {
    int n, m, a[50][50], sum = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < n; i++) sum += a[i][i];
    printf("%d", sum);
    return 0;
}