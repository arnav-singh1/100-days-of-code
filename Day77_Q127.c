#include <stdio.h>
int main() {
    int ch;
    FILE *in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: input.txt not found");
        return 1;
    }
    FILE *out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error: could not create output.txt");
        fclose(in);
        return 1;
    }
    while ((ch = fgetc(in)) != EOF) {
        if (ch >= 'a' && ch <= 'z') ch = ch - 32;
        fputc(ch, out);
    }
    fclose(in);
    fclose(out);
    printf("Converted successfully. Check output.txt");
    return 0;
}