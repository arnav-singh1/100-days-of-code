#include <stdio.h>
#include <string.h>
int main() {
    char a[1000], b[1000];
    int count[256] = {0}, anagram = 1;
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    a[strcspn(a, "\r\n")] = '\0';
    b[strcspn(b, "\r\n")] = '\0';
    for (int i = 0; a[i] != '\0'; i++) {
        unsigned char c = a[i];
        if (c >= 'A' && c <= 'Z') c += 32;
        if (c != ' ') count[c]++;
    }
    for (int i = 0; b[i] != '\0'; i++) {
        unsigned char c = b[i];
        if (c >= 'A' && c <= 'Z') c += 32;
        if (c != ' ') count[c]--;
    }
    for (int i = 0; i < 256; i++)
        if (count[i] != 0) anagram = 0;
    printf(anagram ? "Anagrams" : "Not anagrams");
    return 0;
}