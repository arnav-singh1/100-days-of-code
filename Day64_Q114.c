#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    int last[256], start = 0, best = 0;
    for (int i = 0; i < 256; i++) last[i] = -1;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c = s[i];
        if (last[c] >= start) start = last[c] + 1;   // jump past the earlier copy
        last[c] = i;
        if (i - start + 1 > best) best = i - start + 1;
    }
    printf("%d", best);
    return 0;
}