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
    int v=n-1;
    for(int i=0;i<k;i++){
        temp[i]=num[v];
        v--;
    }
    for(int i=0;i<n-k;i++){
        num[n-1-i]=num[n-i-k+1];
    }
    for(int i=k;i<n;i++){
        num[i-k]=temp[i];
    }

    for(int i=0;i<n;i++){
        printf("%d\n",num[i]);
    }

}