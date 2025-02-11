#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,no=1;
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        for(int i=0;i<n-j;i++){
            printf(" ");
        }
        for(int k=0;k<no;k++){
            printf("%d",k);
            // if(k<=n/2) no++;
            // else no--;
        }
        no+=2;
        printf("\n");
    }

    return 0;
}