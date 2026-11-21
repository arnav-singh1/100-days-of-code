#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\r\n")] = '\0';
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++) printf("%c", s[k]);
            printf("\n");
        }
    }
    return 0;
}