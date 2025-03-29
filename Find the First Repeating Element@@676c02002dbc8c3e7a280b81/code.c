#include <stdio.h>
int repeting(int arr[],int n){
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }
    return -1;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int res = repeting(arr , n);
    if(res!=-1){
        printf("%d",res);
    }
    else{
        printf("-1");
    }

}