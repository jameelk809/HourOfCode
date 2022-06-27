#include<stdio.h>

void main(){
    int N, i, count = 0;
    scanf("%d", &N);
    int scores[N], health[2];
    for(i = 0; i< N; i++)
        scanf("%d", &scores[i]);
    for(i = 0; i< 2; i++)
        scanf("%d", &health[i]);

    for(i = 0; i < N; i++){
        if(health[0] % scores[i] == 0 && health[1] % scores[i] == 0)
            count++;
    }
    printf("%d", count);
}