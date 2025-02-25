#include<stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    n=n&1;
    if(n==1) printf("1");
    else printf("0");
    
}