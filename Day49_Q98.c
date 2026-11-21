#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    int start[100], len[100], w = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';
    int n = strlen(s), i = 0;
    while (i < n) {
        if (s[i] == ' ') {
            i++;
            continue;
        }
        start[w] = i;
        while (i < n && s[i] != ' ') i++;
        len[w] = i - start[w];
        w++;
    }
    for (int k = 0; k < w - 1; k++) {      // initials for every word except the last
        char c = s[start[k]];
        if (c >= 'a' && c <= 'z') c -= 32;
        printf("%c. ", c);
    }
    for (int k = 0; k < len[w - 1]; k++)   // surname in full
        printf("%c", s[start[w - 1] + k]);
    return 0;
}