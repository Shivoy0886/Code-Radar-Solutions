#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int s1;
    scanf("%d",&s1);
    if (s1>=60) printf("Eligible");
    else printf("Not Eligible")
    else if (s1==s2 || s2==s3 || s3==s1) printf("Isosceles");
    else if (s1!=s2 && s2!=s3 && s3!=s1) printf("Scalene");
    return 0;
}