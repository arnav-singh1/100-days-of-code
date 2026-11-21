
#include <stdio.h>

int main() {
    FILE *fp;
    int num;
    long long sum = 0;
    int count = 0;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("File is empty.\n");
        return 0;
    }

    printf("Sum = %lld\n", sum);
    printf("Average = %.2f\n", (double)sum / count);

    return 0;
}
