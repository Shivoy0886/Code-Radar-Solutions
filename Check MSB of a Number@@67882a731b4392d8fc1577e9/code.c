#include<stdio.h>

int main(void){
    int n1;
    scanf("%d",&n1);
    int msb = n1>>31;
    if(msb&1)
        printf("Set");
    else
        printf("Not Set");
}