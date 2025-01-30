#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    pritnf("%d",a>>b & 1);
    return 0;
}