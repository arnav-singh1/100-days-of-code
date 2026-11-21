#include <stdio.h>
#include <string.h>
int main() {
    char s[1000], ch;
    int count = 0;
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';
    scanf(" %c", &ch);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ch) count++;
    }
    printf("Frequency=%d", count);
    return 0;
}