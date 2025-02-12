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
    for(int i=0,j=k+1;i<k;j>0;i++;j--){
        temp[i]=num[j];
    }
    printf("%d",temp[0]);
    printf("%d",temp[1]);

}