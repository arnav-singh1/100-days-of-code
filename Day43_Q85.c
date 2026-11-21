#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';
    int n = strlen(s);
    for (int i = n - 1; i >= 0; i--) printf("%c", s[i]);
    return 0;
}