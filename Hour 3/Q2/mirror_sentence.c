#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){
    char sentence[] = "Coding is awesome";
    int i, j,k=0, len, startIndex, endIndex;
    len = strlen(sentence);
    endIndex = len - 1;
    for(i = len - 1; i >= 0; i--){
        if(sentence[i] == ' ' || i == 0){
            if(i == 0)
                startIndex = 0;
            else
                startIndex = i+1;
            for(j = startIndex; j <= endIndex; j++,k++)
                printf("%c", sentence[j]);
            if(i)
                printf(" ");
            endIndex = i-1;   
        }
    }
}