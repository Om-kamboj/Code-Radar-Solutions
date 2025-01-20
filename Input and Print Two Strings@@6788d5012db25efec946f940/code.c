#include <stdio.h>

int main() {
    char str1[100];
    fgets(str1,sizeof(str1),stdin);
    char str2[100];
    fgets(str2,sizeof(str2),stdin);
    printf("You entered: %s and %s",str1,str2);
    return 0;
}