#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int s1;
    scanf("%d",&s1);
    if (s1>=60) printf("Eligible");
    else printf("Not Eligible")
    return 0;
}