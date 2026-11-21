#include <stdio.h>
#include <string.h>
int main() {
    char a[1000], b[1000], t[2000];
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    a[strcspn(a, "\r\n")] = '\0';
    b[strcspn(b, "\r\n")] = '\0';
    if (strlen(a) != strlen(b)) {
        printf("Not rotation");
        return 0;
    }
    strcpy(t, a);
    strcat(t, a);   // a+a contains every rotation of a
    printf(strstr(t, b) != NULL ? "Rotation" : "Not rotation");
    return 0;
}