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
    for(int i=0,j=k+1;i<k && j<n;i++,j++){
        temp[i]=num[j];
    }
    for(int i=0;i<n-k;i++){
        num[n-i-1]=num[n-k-i-1];
    }
    for(int i=0;i<k;i++){
        printf("%d",temp[i]);
    }
    for(int i=2;i<n;i++){
        printf("%d",num[i]);
    }
    
}