#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c",&c);
    if(c=='a' || c=='i' || c=='o' || c=='u' || c=='e') printf("Vowel");
    // else printf("Consonant");
    if(c>=0 && c<=9) printf("Digit");
    // else printf("Special Character");
    return 0;
}