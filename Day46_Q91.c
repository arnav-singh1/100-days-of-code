#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            continue;
        printf("%c", c);
    }
    return 0;
}