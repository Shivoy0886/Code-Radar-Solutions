#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n1;
    scanf("%d",&n1);
    if(n1>=12){
        if(n1==2) printf("%d",28);
        else if(n1%2==0) printf("%d",30);
        else if (n1%2!=0) printf("%d",31);
    }
    else printf("Invalid month");
    
    

    return 0;
}