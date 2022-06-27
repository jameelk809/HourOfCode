#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char s[]){
    int i, n = strlen(s);
    for (int i = 0; i < n; i++){
        if (s[i] != s[n - i - 1])
            return false;
    }
    return true;
}

int noOfAppends(char s[]){
    if (isPalindrome(s))
        return 0;
    s++;
    return 1 + noOfAppends(s);
}

int main(){
    char s[100];
    int pali;
    scanf("%s", s);
    pali = noOfAppends(s);
    for (int i = pali - 1; i >= 0; i--)
        printf("%c", s[i]);
    return 0;
}
