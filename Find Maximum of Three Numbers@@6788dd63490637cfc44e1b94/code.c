#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n1,n2,n3,max;
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2) max=n1;
    else  max=n2;
    if(n2>n3) max=n2;
    else max=n3;
    prrintf("%d",max);
    return 0;
}