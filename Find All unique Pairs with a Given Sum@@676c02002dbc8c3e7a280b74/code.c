#include<stdio.h>

int main(void){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int c=0;
    for(int j=0;j<10;j++){
        for(int i=j;i<10;i++){
            if(arr[j]+arr[i]==8) c++;
        }
    }
    printf("Pairs : %d\n",c);
}
