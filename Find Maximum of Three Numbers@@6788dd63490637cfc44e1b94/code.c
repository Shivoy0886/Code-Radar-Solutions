#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n1,n2,n3,max=0;
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2) max=n1;
    if(n1<n3) max=n3;
    if(n2>n3) max=n2;
    printf("%d",max);
    return 0;
}