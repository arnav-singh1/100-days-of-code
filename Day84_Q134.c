#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    int choice;
    enum Status st;

    printf("Enter status (0=SUCCESS, 1=FAILURE, 2=TIMEOUT): ");
    scanf("%d", &choice);
    st = (enum Status)choice;

    switch (st) {
        case SUCCESS: printf("Operation completed successfully.\n"); break;
        case FAILURE: printf("Operation failed.\n");                 break;
        case TIMEOUT: printf("Operation timed out.\n");              break;
        default:      printf("Unknown status.\n");
    }
    return 0;
}