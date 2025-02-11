#include<stdio.h>

int main(void){
    int n,k;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num);
    }
    scanf("%d",&k);

    for(int i=0;i<n;i++){
        temp=num[n-i-k+1];
        fval=num[n+i-k];
        num[n-i-k+1]=fval;
        num[n+i-k]=temp;
    }

    for(int i=0;i<n;i++){
        printf("%d\n",num[i]);
    }

}