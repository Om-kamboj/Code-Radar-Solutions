#include <stdio.h>

int main() {
    char name[100], hobby[100];
    int age;
    scanf("%s %d %s",&name,&age,&hobby);
    printf("Name: %s",name);
    printf("\nAge: %d",age);
    printf("\nHobby: %s",hobby);
    return 0;
}