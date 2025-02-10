#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int s1;
    scanf("%d",&s1);
    if (s1>0) printf("Positive");
    if (s1<0) printf("Negative");
    if (s1==0) printf("Zero");
    return 0;
}