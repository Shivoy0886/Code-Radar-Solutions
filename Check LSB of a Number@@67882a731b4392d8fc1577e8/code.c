#include<stdio.h>

int main(void){
    int n1;
    scanf("%d",&n1);
    if(n1&1==1)
        printf("Set");
    else
        printf("Not Set");
}