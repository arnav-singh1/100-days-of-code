#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';
    int n = strlen(s), i = 0, bestStart = 0, bestLen = 0;
    while (i < n) {
        if (s[i] == ' ') {
            i++;
            continue;
        }
        int start = i;
        while (i < n && s[i] != ' ') i++;
        if (i - start > bestLen) {
            bestLen = i - start;
            bestStart = start;
        }
    }
    for (int k = 0; k < bestLen; k++) printf("%c", s[bestStart + k]);
    return 0;
}