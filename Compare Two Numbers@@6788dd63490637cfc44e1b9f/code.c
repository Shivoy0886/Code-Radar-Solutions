#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int s1,s2;
    scanf("%d %d",&s1,&s2);
    if (s1>s2) printf("First");
    else if (s1<s2) printf("Second");
    else printf("Equal");
    return 0;
}