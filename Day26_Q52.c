#include <stdio.h>
int main() {
    int groups[] = {1, 3, 5, 3, 1};
    for (int g = 0; g < 5; g++) {
        for (int i = 0; i < groups[g]; i++) printf("*\n");
        if (g < 4) printf("\n");
    }
    return 0;
}