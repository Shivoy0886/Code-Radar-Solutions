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
        num[n-i-1]=num[k-i];
    }
    for(int i=0;i<k;i++){
        printf("%d\n",temp[i]);
    }
    for(int i=k;i<n;i++){
        printf("%d\n",num[i]);
    }
    
}