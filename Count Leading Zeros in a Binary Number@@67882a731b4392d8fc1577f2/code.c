#include <stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    for(i = 0;(n|1)!=0;i++){
        n = n>>1;
    }
    printf("%d",32-(i+1));
    return 0;
}