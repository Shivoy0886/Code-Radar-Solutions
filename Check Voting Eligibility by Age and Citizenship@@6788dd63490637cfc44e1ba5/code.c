#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    if (n1>=18 && n2==1) printf("Eligible");
    else printf("Not Eligible");
    return 0;
}