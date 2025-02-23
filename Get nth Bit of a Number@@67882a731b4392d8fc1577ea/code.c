#include<stdio.h>

int main(void){
    int n,p;
    scanf("%d %d",&n,&p);
    n=n>>(p-1);
    printf("%d",n);
}