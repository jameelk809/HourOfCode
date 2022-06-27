#include<stdio.h>

void main(){
    int n, i,j=0;
    scanf("%d", &n);
    int arr[n];
    for(i = 1; i <= n; i++)
        arr[i] = i;
    while(n>1){
        j = 2*j+1;
        n/=2;
    }
    printf("%d",arr[j+1]);
}