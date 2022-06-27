#include<stdio.h>
#include<string.h>

char FirstNonRepeat(char str[]){
    int i, freq[256] = {0};
    for(i = 0; i < strlen(str); i++)
        freq[str[i]]++;
    for(i = 0; i < strlen(str); i++){
        if(freq[str[i]] == 1)
            return str[i];
    }
    return '0';
}

void main(){
    char str[20];
    scanf("%s", str);
    printf("%c", FirstNonRepeat(str));
}