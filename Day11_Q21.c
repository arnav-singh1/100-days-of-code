#include <stdio.h>
int main() {
    int m;
    scanf("%d", &m);
    switch(m) {
        case 2: printf("February, 28 days\n"); break;
        case 12: printf("December, 31 days\n"); break;
        default: printf("Month recorded\n"); break;
    }
    return 0;
}