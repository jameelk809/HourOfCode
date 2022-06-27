#include<stdio.h>
#include<string.h>
void main(){
    char data[20], rev_data[20];
    int n, i, count = 0;
    scanf("%s", data);
    n = strlen(data);
    for(i = 0; i < n; i++)
        rev_data[i] = data[n-i-1];
    for(i=0; i<n; i++){
        if(data[i] == rev_data[i])
            count++;
    }
    printf("%d", count);
}