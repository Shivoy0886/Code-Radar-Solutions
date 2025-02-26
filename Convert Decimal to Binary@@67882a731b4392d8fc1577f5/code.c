#include<stdio.h>

int main(void){
    int n,lsb,c=0;
    int bn=n;
    scanf("%d",&n);
    while(n){
        lsb=n&1;
        n=n>>1;
        c++;
    }
    int b[c];
    for(int i=c-1;i>=0;i--){
        lsb==bn&1;
        if(lsb==1) b[i]=1;
        else b[i]=0;
        bn>>1;
    }
    for(int i=0;i<c;i++){
        printf("%d",b[i]);
    }
}