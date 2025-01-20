#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%a %b %c",&a,&b,&c);
    float avg = (a+b+c)/3;
    printf("Average: %.2f",avg);
    return 0;
}