#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str1[20];
    char str2[20];
    scanf("%s",&str1);
    scanf("%s",&str2);
    printf("You entered: %s %s",str1,str2);
    return 0;
}