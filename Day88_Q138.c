#include <stdio.h>

enum Days {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
};

int main() {
    enum Days day;

    char *names[] = {
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THURSDAY",
        "FRIDAY"
    };

    for (day = MONDAY; day <= FRIDAY; day++) {
        printf("%s = %d\n", names[day - 1], day);
    }

    return 0;
}