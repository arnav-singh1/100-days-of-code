#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';
    int i = 0, j = strlen(s) - 1, pal = 1;
    while (i < j) {
        if (s[i] != s[j]) {
            pal = 0;
            break;
        }
        i++;
        j--;
    }
    printf(pal ? "Palindrome" : "Not palindrome");
    return 0;
}