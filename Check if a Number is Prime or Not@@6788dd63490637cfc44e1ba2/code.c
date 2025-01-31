#include <stdio.h>

int main() {
    int n,i;
    int isPrime = 1;
    scanf("%d",&n);

    // if(n<=1){
    //     printf("Not Prime");
    // }

    for(i = 2;i*i<=n;i++){
        if(n%i==0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime==1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}