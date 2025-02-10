#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int s1,s2,s3,n;
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1>s2){
        n=(s1<s2+s3);
    }
    else if(s2>s3){
        n=(s2<s1+s3);
    }
    else if(s3>s1){
        n=(s3<s2+s1);;
    }
    if(n==1) printf("Valid");
    else printf("Invalid");
    return 0;
}