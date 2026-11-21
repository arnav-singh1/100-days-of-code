#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    int capNext = 1;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (c >= 'a' && c <= 'z' && capNext) c -= 32;
        else if (c >= 'A' && c <= 'Z' && !capNext) c += 32;
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) capNext = 0;
        if (c == '.' || c == '!' || c == '?') capNext = 1;
        printf("%c", c);
    }
    return 0;
}