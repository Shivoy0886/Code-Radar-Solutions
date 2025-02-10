#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n1,n2,n3,max=0;
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2) n1=max;
    if(n1<n3) n3=max;
    else
    printf("%d",max);
    return 0;
}