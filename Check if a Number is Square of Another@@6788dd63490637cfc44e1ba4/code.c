#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int s1,s2;
    scanf("%d %d",&s1,&s2);
    if (s2*s2==s1) printf("Yes");
    else printf("No");
    return 0;
}