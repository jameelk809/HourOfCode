#include<stdio.h>

void main(){
    int n, i, j, count=0, temp;
    scanf("%d", &n);
    int arr[n], sort_arr[n];
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sort_arr[i] = arr[i];
    }
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if(sort_arr[i] > sort_arr[j]){
                temp = sort_arr[i];
                sort_arr[i] = sort_arr[j];
                sort_arr[j] = temp;
            }
        }
    }
    for(i = 0; i < n; i++){
        if(arr[i] == sort_arr[i])
            count++;
    }
    printf("%d", count);
}