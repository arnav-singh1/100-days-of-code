
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student findTopStudent(struct Student s[], int n) {
    int i, top = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks) {
            top = i;
        }
    }

    return s[top];
}

int main() {
    int n, i;

    scanf("%d", &n);

    struct Student s[n];

    for (i = 0; i < n; i++) {
        scanf("%d %49s %f",
              &s[i].roll, s[i].name, &s[i].marks);
    }

    struct Student topStudent = findTopStudent(s, n);

    printf("Top Student Details:\n");
    printf("Roll Number: %d\n", topStudent.roll);
    printf("Name: %s\n", topStudent.name);
    printf("Marks: %.2f\n", topStudent.marks);

    return 0;
}
