#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",(b<<1)|a);
    return 0;
}