#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    if((n%400==0) || (n%100!=0 && n%4==0)) printf("True");
    else printf("False");
    
    return 0;
}