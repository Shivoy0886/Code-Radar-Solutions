#include<stdio.h>

int main(void){
    int n,p;
    scanf("%d %d",&n,&p);
    n=n>>p;
    if (n&1) printf("1");
    else printf("0");
}