#include<stdio.h>

int main(void){
    int n,lsb;
    scanf("%d",&n);
    while(n){
        lsb=n&1;
        if(lsb==1) printf("1");
        else printf("0");
        n=n>>1;
    }
}