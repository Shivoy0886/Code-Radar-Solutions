#include<stdio.h>

int main(void){
    int n,p;
    scanf("%d %d",&n,&p);
    n=n>>(p-1);
    if (n&1) printf("0");
    else printf("1");
}