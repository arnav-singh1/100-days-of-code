#include <stdio.h>
int main() {
    char s[1000];
    int count = 0;
    fgets(s, sizeof(s), stdin);
    while (s[count] != '\0' && s[count] != '\n' && s[count] != '\r') count++;
    printf("%d", count);
    return 0;
}