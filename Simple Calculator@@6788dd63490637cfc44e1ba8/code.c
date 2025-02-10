#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
     int n1,n2;
     char c;
    scanf("%d %d %c",&n1,&n2,&c);
    if (c=='+') printf("%d",n1+n2);
    else if (c=='-') printf("%d",n1-n2);
    else if (c=='*') printf("%d",n1*n2);
    else if (c=='/') printf("%.f",(float)n1/n2);
    else print("Error");

    return 0;
}