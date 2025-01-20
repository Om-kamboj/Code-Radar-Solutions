#include <stdio.h>

int main() {
    float a,b,c;
    scanf("%.2fa %.2fb %.2fc",&a,&b,&c);
    float avg = (a+b+c)/3;
    printf("Average: %.2f",avg);
    return 0;
}