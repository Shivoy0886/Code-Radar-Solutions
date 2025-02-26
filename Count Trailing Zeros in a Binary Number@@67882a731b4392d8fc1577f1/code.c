#include<stdio.h>

int main(void){
    int n,c=0;
    scanf("%d",&n);
    int lsb=1;
    while(!(n&lsb)){
        lsb<<=1;
        c++;
    }
    printf("%d",c);

}