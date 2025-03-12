#include<stdio.h>

int main(void){
    int N,x;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    int c=0;
    for(int j=0;j<N;j++){
        if (j > 0 && arr[j] == arr[j - 1]) {
            continue;
        }
        for(int i=j+1;i<N;i++){
              if (i > j + 1 && arr[i] == arr[i - 1]) {
                continue;
            }
            if(arr[j]+arr[i]==x) printf("%d %d\n",arr[j],arr[i]);
        }
    }
}
