#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n1;
    scanf("%d",&n1);
    if (n1<0) printf("Freezing");
    else printf("Above Freezing");
    return 0;
}