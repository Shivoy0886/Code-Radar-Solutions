#include<stdio.h>

int main(void){
    int size;
    scanf("%d",&size);
    int nums[size];
    for(int i=0;i<size;i++){
        scanf("%d",&nums[i]);
    }
    int d;
    scanf("%d",&d);
    int temp[d];
    int j=0;
    for(int i=size-d;i<size;i++){
        temp[j]=nums[i];
        j++;
    }
    for(int i=0;i<size-d;i++){
        nums[size-i-1]=nums[size-d-i-1];
    }
    for(int i=0;i<d;i++){
        nums[i]=temp[i];
    }
    for(int i=0;i<size;i++){
        printf("%d ",nums[i]);
    }
}
