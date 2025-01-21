#include <stdio.h>
{
    int n,m;
    scanf("%d %d",&n,&m);
    if(n%m==0 && m%n==0){
        printf("Yes");
    }
    else{
        printf("No")
    }
    return 0;
}