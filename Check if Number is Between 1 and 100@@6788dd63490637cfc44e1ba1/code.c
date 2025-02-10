#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int s1;
    scanf("%d",&s1);
    if (s1>=1 && s1<=100) printf("In Range");
    else printf("Out of Range");
    return 0;
}