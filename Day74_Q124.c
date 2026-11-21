#include <stdio.h>
int main() {
    char src[200], dest[200];
    int ch;
    scanf("%s %s", src, dest);
    FILE *in = fopen(src, "r");
    if (in == NULL) {
        printf("Error: source file not found");
        return 1;
    }
    FILE *out = fopen(dest, "w");
    if (out == NULL) {
        printf("Error: could not create destination file");
        fclose(in);
        return 1;
    }
    while ((ch = fgetc(in)) != EOF) fputc(ch, out);
    fclose(in);
    fclose(out);
    printf("File copied successfully");
    return 0;
}