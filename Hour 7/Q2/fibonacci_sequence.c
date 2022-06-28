#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool is_Perfect_Square(int K);
bool is_Fibonacci(int R);

void main(){
    int n, i, count = 0;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++) {
        if(is_Fibonacci(arr[i]))
            count++;
    }
    printf("%d", count);
}

bool is_Perfect_Square(int K) {
        int s = (int)sqrt(K);
        return ((s*s == K) ? true: false);
    }

bool is_Fibonacci(int R){
    return(is_Perfect_Square(5*R*R + 4) || is_Perfect_Square(5*R*R - 4));
}
