#include <stdio.h>

int main() {
    char name[100];
    scanf("%s",&name);
    int age;
    scanf("%d",&age);
    char hobby;
    scanf("%s",hobby);
    printf("Name: %s",name);
    printf("\nAge: %d",age);
    printf("\nHobby: %s",hobby);
    return 0;
}