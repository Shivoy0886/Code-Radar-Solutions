#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    int chr
    scanf("%c",&c);
    chr=(int)c;
    if(c=='a' || c=='i' || c=='o' || c=='u' || c=='e') printf("Vowel");
    // else printf("Consonant");
    if(c>='0' && c<='9') printf("Digit");
    if(chr>=33 && c<=41) printf("Special Character");
    return 0;
}