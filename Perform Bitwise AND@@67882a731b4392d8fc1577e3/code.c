#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int bit = a&b;
    printf("%d",bit);
    return 0;
}