#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str1[20], str2[20];
    int n;
    scanf("%s %d %s",&str1,&n,&str2);
    printf("Name: %s\nAge: %d\nHobby: %s",str1,n,str2);
    return 0;
}