#include <stdio.h>

int main() {
    char name[100];
    int age;
    scanf("%s %d",&name,&age);
    char hobby[100];
    scanf("%s",&hobby);
    printf("Name: %s",name);
    printf("Age: %d",age);
    printf("Hobby: %s",hobby);
    return 0;
}