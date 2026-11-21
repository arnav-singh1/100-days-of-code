#include <stdio.h>

enum Light { RED, YELLOW, GREEN };

int main() {
    int choice;
    enum Light signal;

    printf("Enter signal (0=RED, 1=YELLOW, 2=GREEN): ");
    scanf("%d", &choice);
    signal = (enum Light)choice;

    switch (signal) {
        case RED:    printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN:  printf("Go\n");   break;
        default:     printf("Invalid signal\n");
    }
    return 0;
}