#include <stdio.h>
int main() {
    char s[1000], t[1000];
    int count[26] = {0}, ok = 1;
    scanf("%s %s", s, t);
    for (int i = 0; s[i] != '\0'; i++) count[s[i] - 'a']++;
    for (int i = 0; t[i] != '\0'; i++) count[t[i] - 'a']--;
    for (int i = 0; i < 26; i++)
        if (count[i] != 0) ok = 0;
    printf(ok ? "Anagram" : "Not Anagram");
    return 0;
}