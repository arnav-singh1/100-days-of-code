#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, d;
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
        printf("Roots are real and different: %.0lf, %.0lf\n", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
    else if (d == 0)
        printf("Roots are real and same: %.0lf\n", -b / (2 * a));
    else
        printf("Roots are complex\n");
    return 0;
}