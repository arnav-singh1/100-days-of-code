#include <stdio.h>
int main() {
    int r, c, a[50][50], rowSum[50];
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            rowSum[i] += a[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        if (i > 0) printf(" ");
        printf("%d", rowSum[i]);
    }
    return 0;
}