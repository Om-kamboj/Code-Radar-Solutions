#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a == a*a){
        printf("Yes");
    }
    else if(b == b*b){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}