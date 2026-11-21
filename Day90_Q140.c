#include <stdio.h>

enum Gender {
    MALE = 1,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;
    int choice;

    printf("Enter name: ");
    scanf("%49s", p.name);

    printf("1. Male\n2. Female\n3. Other\n");
    printf("Enter gender: ");
    scanf("%d", &choice);

    p.gender = choice;

    printf("\nName: %s\n", p.name);

    switch (p.gender) {
        case MALE:
            printf("Gender: Male");
            break;

        case FEMALE:
            printf("Gender: Female");
            break;

        case OTHER:
            printf("Gender: Other");
            break;

        default:
            printf("Invalid gender");
    }

    return 0;
}