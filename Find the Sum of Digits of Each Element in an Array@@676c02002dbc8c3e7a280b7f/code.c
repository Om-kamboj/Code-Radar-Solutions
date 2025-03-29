#include <stdio.h>
int sum_of_digits(int n){
    if(n<0){
        n = -n;
    }
    if(n==0){
        return 0;
    }
    else{
        return (n%10) + sum_of_digits(n/10);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i = 0;i<n;i++){
        printf("%d ",sum_of_digits(arr[i]));
    }
}