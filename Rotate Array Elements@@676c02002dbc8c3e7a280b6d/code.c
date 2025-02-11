#include<stdio.h>

int main(void){
    int n,k;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    scanf("%d",&k);
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=num[n-k];
    }
    for(int i=0;i<n-k;i++){
        num[n-1-i]=num[n-i-k+1];
    }
    for(int i=k;i>0;i--){
        num[n-k]=temp[i];
    }

    for(int i=0;i<n;i++){
        printf("%d\n",num[i]);
    }

}