#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i = 1;(a&1)==0;i++){
        a = a>>1;
    }
    printf("%d",i);

    return 0;
}