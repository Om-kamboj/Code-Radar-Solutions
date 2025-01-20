#include <stdio.h>

int main() {
    float radius;
    scanf("%d",&radius);
    float area = 3.14 * radius * radius;
    printf("Area: %.2f",area);
    return 0;
}