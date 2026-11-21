#include <stdio.h>
int main() {
    int d, m, y;
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    scanf("%d/%d/%d", &d, &m, &y);
    if (m < 1 || m > 12) {
        printf("Invalid date");
        return 0;
    }
    printf("%02d-%s-%d", d, months[m - 1], y);
    return 0;
}