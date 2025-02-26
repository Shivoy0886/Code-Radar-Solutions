#include<stdio.h>

int main(void){
    int n,c=0;
    scanf("%d",&n);
    while(n!=0){
        if(n%2==1) c++;
        n/=2;
    }
    printf("%d",32-c);
}