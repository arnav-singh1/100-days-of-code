#include <stdio.h>
int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++)
        printf("%c\n", s[i]);
    return 0;
}