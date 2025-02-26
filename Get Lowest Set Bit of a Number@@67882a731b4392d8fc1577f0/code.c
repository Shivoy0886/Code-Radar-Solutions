#include<stdio.h>

int main(void){
    int n,c=0;
    scanf("%d",&n);
    int lsb=(-n);
    while(lsb){
        lsb>>=1;
        c++;
    }
    printf("%d",c-1);
}