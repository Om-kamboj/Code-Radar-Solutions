#include <stdio.h>
void runningSum(int arr[],int n){
    for(int i = 0;i<n;i++){
        arr[i] += arr[i-1];
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
        printf("%d ",runningSum(arr[i]));
    }


    return 0;
}