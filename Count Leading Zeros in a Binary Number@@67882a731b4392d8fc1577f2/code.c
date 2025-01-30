#include <stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    if(n==0){
        printf("32\n");
        return 0;
    }
    while(n!=0)
    {
        i++;
        n = n>>1;
    }
    printf("%d",32-i);
    return 0;
}