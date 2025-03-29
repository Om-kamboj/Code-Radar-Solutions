#include <stdio.h>
int isPrime(int n){
    if(n<2){
        return 0;
    }
    else{
        for(int i = 0;i*i<=n;i++){
            if(n%i==0){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int count = 0;
    for(int i = 0;i<n;i++){
        if(isPrime(arr[i])){
            count++;
        }
    }
    printf("%d",count);
}