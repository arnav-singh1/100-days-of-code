#include <stdio.h>
int main() {
    char line[1000];
    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: info.txt not found");
        return 1;
    }
    while (fgets(line, sizeof(line), fp) != NULL) printf("%s", line);
    fclose(fp);
    return 0;
}