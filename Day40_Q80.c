#include <stdio.h>
int main() {
    int r1, c1, r2, c2, a[50][50], b[50][50], p[50][50];
    scanf("%d %d", &r1, &c1);
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    scanf("%d %d", &r2, &c2);
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);
    if (c1 != r2) {
        printf("Not possible");
        return 0;
    }
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++) {
            p[i][j] = 0;
            for (int k = 0; k < c1; k++)
                p[i][j] += a[i][k] * b[k][j];
        }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            if (j > 0) printf(" ");
            printf("%d", p[i][j]);
        }
        printf("\n");
    }
    return 0;
}