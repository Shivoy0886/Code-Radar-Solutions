#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
     int n,no=1;
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        int num=1;
        for(int i=0;i<n-1-j;i++){
            printf(" ");
        }
        for(int k=0;k<no;k++){
            printf("%d ",k+1);
        }
        no++;
        printf("\n");
    }
    return 0;
}