#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int shift = 1 << 31;
    if(n&shift){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}