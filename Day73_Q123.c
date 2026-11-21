#include <stdio.h>
int main() {
    char filename[200];
    int ch, chars = 0, words = 0, lines = 0, inWord = 0, lastChar = '\n';
    scanf("%s", filename);
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: file not found");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (ch == ' ' || ch == '\n' || ch == '\t' || ch == '\r') inWord = 0;
        else if (!inWord) {
            inWord = 1;
            words++;
        }
        lastChar = ch;
    }
    if (chars > 0 && lastChar != '\n') lines++;   // last line without newline
    fclose(fp);
    printf("Characters=%d, Words=%d, Lines=%d", chars, words, lines);
    return 0;
}