#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int canditate = arr[n / 2];
    int count  = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]==canditate){
            count ++;
        }
    }
    if(count > n/2){
        printf("%d",count);
    }
    else{
        printf("-1");
    }

    return 0;
}