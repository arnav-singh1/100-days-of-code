#include <stdio.h>
int main() {
    long long num;
    int count[10] = {0};
    scanf("%lld", &num);
    if (num < 0) num = -num;
    if (num == 0) count[0] = 1;
    while (num > 0) {
        count[num % 10]++;
        num /= 10;
    }
    int best = 0;
    for (int d = 1; d < 10; d++) {
        if (count[d] > count[best]) best = d;   // on a tie, smaller digit wins
    }
    printf("%d", best);
    return 0;
}