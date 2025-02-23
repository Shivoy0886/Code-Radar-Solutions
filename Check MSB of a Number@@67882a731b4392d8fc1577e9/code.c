#include<stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    n>>31;
    if(n&1) printf("Set");
    else printf("Not Set");
}