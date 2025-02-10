#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int s1;
    scanf("%d",&s1);
    if (s1%2==0) printf("Even");
    else printf("Odd");
    return 0;
}