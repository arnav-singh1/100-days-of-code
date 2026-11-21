#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    int choice;

    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");

    printf("Enter role: ");
    scanf("%d", &choice);

    switch (choice) {
        case ADMIN:
            printf("Welcome Admin! Full access granted.");
            break;

        case USER:
            printf("Welcome User! Limited access granted.");
            break;

        case GUEST:
            printf("Welcome Guest! Read-only access.");
            break;

        default:
            printf("Invalid role");
    }

    return 0;
}