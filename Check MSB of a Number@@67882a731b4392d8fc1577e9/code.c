#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int shift << 31;
    if((n&shift)>1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}