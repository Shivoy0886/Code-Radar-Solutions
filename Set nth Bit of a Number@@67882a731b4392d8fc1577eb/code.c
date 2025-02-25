#include<stdio.h>

int main(void){
    int n,i;
    scanf("%d %d",&n,&i);
    n=n|(1<<i);
    printf("%d",n);

}