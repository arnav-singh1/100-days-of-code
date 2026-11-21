#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';
    int n = strlen(s), i = 0, words = 0;
    while (i < n) {
        if (s[i] == ' ') {
            i++;
            continue;
        }
        char c = s[i];
        if (c >= 'a' && c <= 'z') c -= 32;
        if (words > 0) printf(" ");
        printf("%c.", c);
        words++;
        while (i < n && s[i] != ' ') i++;
    }
    return 0;
}