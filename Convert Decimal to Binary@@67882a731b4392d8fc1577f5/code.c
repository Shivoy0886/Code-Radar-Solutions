#include<stdio.h>

int main(void){
    int n,lsb,c=0;
    scanf("%d",&n);
    while(n){
        lsb=n&1;
        n=n>>1;
        c++;
    }
    printf("%d",c);
}