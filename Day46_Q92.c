#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    int seen[256] = {0};
    char ans = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c = s[i];
        if (c >= 'a' && c <= 'z') {
            if (seen[c]) {
                ans = c;
                break;
            }
            seen[c] = 1;
        }
    }
    if (ans) printf("%c", ans);
    else printf("-1");
    return 0;
}
