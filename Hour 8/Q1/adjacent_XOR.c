#include<stdio.h>
#include<math.h>

void main(){
    int n, i=0, len, rem;
    scanf("%d", &n);
    int binary[10];
    while(n > 0){               //binary in reversed(wrong) order
        rem = n % 2;
        binary[i] = rem;
        i++;
        n = n/2;
    }
    len = i;

    int XOR_result[len];
    XOR_result[0] = binary[0] ^ 1;
    for(i = 1; i < len; i++){
        XOR_result[i] = binary[i] ^ binary[i-1];
    }

    int res = 0;
    for(i = 0; i < len; i++)
        res += XOR_result[len-i-1]*(pow(2, (len-i-1)));
    printf("%d", res);
}