#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("Average: %.2f",(n1+n2+n3)/(float)3);
    return 0;
}