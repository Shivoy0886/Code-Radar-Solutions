#include<stdio.h>

int main(void){
    int n,c=0;
    scanf("%d",&n);
    int msb=1<<(32-1);
    while(!(n&msb)){
        msb>>=1;
        c++;
    }
    printf("%d",c);
}