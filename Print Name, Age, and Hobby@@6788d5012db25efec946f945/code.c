#include <stdio.h>

int main() {
    char name[100];
    fgets(name,sizeof(name),stdin);
    int age;
    scanf("%d",&age);
    char hobby;
    fgets(hobby,sizeof(hobby),stdin);
    printf("Name: %s",name);
    printf("\nAge: %d",age);
    printf("\nHobby: %s",hobby);
    return 0;
}