#include <stdio.h>

int isPrime(int num);

int main() {
    int t;
    scanf("%d",&n);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}

int isPrime(int num){
    int c;
    for(int i;i<num;i++){
        if(n%i==0){
            c++;
        }
        if(n==2) return 1;
        else return 0;
    }
}
