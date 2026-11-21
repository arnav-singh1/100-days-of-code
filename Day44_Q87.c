#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    int spaces = 0, digits = 0, special = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (c == ' ') spaces++;
        else if (c >= '0' && c <= '9') digits++;
        else if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))) special++;
    }
    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);
    return 0;
}