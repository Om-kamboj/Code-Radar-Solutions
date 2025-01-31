#include <stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    if(n==0){
        printf("32");
    }
    while(n!=0)
    {
        i++;
        n = n>>1;
    }
    printf("%u",32-i);
    return 0;
}