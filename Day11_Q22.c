#include <stdio.h>
int main() {
    double cp, sp;
    scanf("%lf %lf", &cp, &sp);
    if (sp > cp) printf("Profit %.0lf%%\n", ((sp - cp) / cp) * 100);
    else if (cp > sp) printf("Loss %.0lf%%\n", ((cp - sp) / cp) * 100);
    else printf("No Profit No Loss\n");
    return 0;
}