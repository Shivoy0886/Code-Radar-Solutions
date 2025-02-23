#include<stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    msb=n>>31;
    if(msb&1) printf("Set");
    else printf("Not Set");
}