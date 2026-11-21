#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    int age;
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\r\n")] = '\0';
    printf("Enter age: ");
    scanf("%d", &age);
    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error: could not create file");
        return 1;
    }
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);
    printf("Data saved successfully in info.txt");
    return 0;
}