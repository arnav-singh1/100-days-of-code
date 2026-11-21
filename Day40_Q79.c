#include <stdio.h>
int main() {
    int r, c, a[50][50];
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    // each diagonal runs from top-right to bottom-left, one diagonal per line
    for (int s = 0; s <= r + c - 2; s++) {
        int first = 1;
        for (int i = 0; i < r; i++) {
            int j = s - i;
            if (j >= 0 && j < c) {
                if (!first) printf(" ");
                printf("%d", a[i][j]);
                first = 0;
            }
        }
        printf("\n");
    }
    return 0;
}