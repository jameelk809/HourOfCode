#include<stdio.h>
#include<string.h>

void main(){
    char queue_A[20];
    gets(queue_A);
    char queue_B[20];
    gets(queue_B);
    int len = strlen(queue_A), i, count = 0;
    for(i = 0; i < len; i++){
        if(queue_A[i] != queue_B[i])
            count++;
    }
    printf("%d",count*100/len);
}