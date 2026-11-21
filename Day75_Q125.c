#include <stdio.h>
#include <string.h>
int main() {
    char filename[200], text[1000];
    scanf("%s", filename);
    getchar();   // remove the Enter left after the filename
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\r\n")] = '\0';
    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: could not open file");
        return 1;
    }
    fprintf(fp, "%s\n", text);
    fclose(fp);
    printf("Text appended successfully");
    return 0;
}