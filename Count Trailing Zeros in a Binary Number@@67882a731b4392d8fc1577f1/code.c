#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int i = 0;
    while(n!=0){
        i++;
        n = n<<1;
    }
    printf("%d",32-i);
    return 0;
}