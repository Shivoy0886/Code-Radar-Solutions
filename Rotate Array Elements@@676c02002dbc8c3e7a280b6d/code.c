#include<stdio.h>

int main(void){
    int n,k;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num);
    }
    scanf("%d",&k);

    int temp1=num[n-1];
    int temp2=num[n-2];

    for(int i=0;i<n-2;i++){
        num[i+2]=num[i];
    }
    num[0]=temp1;
    num[1]=temp2;

    for(int i=0;i<n;i++){
        printf("%d\n",num[i]);
    }

}