#include <stdio.h>

int main() {
    char c[50];
    int i=0;
    while (c!='/0'){
        scanf("%s",&c[i]);
        i++;
    }
    printf("You entered: ");
    int j=0;
    while(c!='/0'){
        printf("%s",c[j]);
        j++;
    }
    return 0;
}