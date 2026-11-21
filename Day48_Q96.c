#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';
    int n = strlen(s), i = 0;
    while (i < n) {
        if (s[i] == ' ') {
            printf(" ");
            i++;
            continue;
        }
        int start = i;
        while (i < n && s[i] != ' ') i++;
        for (int k = i - 1; k >= start; k--) printf("%c", s[k]);
    }
    return 0;
}