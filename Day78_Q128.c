#include <stdio.h>
int main() {
    char filename[200];
    int ch, vowels = 0, consonants = 0;
    scanf("%s", filename);
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: file not found");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        if (ch >= 'A' && ch <= 'Z') ch += 32;      // treat upper and lower case the same
        if (ch >= 'a' && ch <= 'z') {              // digits, spaces and symbols are ignored
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels++;
            else consonants++;
        }
    }
    fclose(fp);
    printf("Vowels=%d, Consonants=%d", vowels, consonants);
    return 0;
}