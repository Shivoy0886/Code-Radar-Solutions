#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int s1,s2,s3,largest;
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1>s2){
        if(s1<s2+s3) printf("Valid");
    }
    if(s2>s3){
        if(s2<s1+s3) printf("Valid");
    }
    if(s3>s1){
        if(s3<s2+s1) printf("Valid");
    }
    else printf("Invalid");
    return 0;
}