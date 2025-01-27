#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int fact = 1;
    for(int i = 1;i<=n;i++){
        fact *= i;
        printf("%d x %d = %d",n,i,fact);
    }
    return 0;
}