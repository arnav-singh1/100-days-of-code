#include <stdio.h>
int main() {
    char filename[200], line[1000];
    scanf("%s", filename);
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: file does not exist");
        return 1;
    }
    while (fgets(line, sizeof(line), fp) != NULL) printf("%s", line);
    fclose(fp);
    return 0;
}