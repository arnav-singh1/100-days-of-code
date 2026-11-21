#include <stdio.h>
int main() {
    int r, c, x, sum = 0;
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            scanf("%d", &x);
            sum += x;
        }
    printf("%d", sum);
    return 0;
}