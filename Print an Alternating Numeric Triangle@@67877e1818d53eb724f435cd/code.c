#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            if((i+j==n)){
                printf("1");
            }
            else{
                prinf("");
            }
        }
        printf("\n");
    }
    return 0;
}