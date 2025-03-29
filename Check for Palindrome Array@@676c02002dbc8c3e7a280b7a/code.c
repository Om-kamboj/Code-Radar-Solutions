#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int pallindrome = 1;
    for(int i = 0;i<n/2;i++){
        if(arr[i] != arr[n-i-1]){
            pallindrome = 0;
            break;
        }
    }
    if(pallindrome){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}