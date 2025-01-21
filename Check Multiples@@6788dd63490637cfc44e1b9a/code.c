#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    if(m!=0 && n%m==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}