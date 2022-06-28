#include<stdio.h>

int gcd(int x, int y);
int lcm(int x, int y);

void main(){
    int i, max = -1, n;
    scanf("%d", &n);
    int arr[n], lcm_list[n-1];
    for(i = 0; i< n; i++)
        scanf("%d", &arr[i]);
    for(i = 0; i < n-1; i++){
        lcm_list[i] = lcm(arr[i], arr[i+1]);
        if(lcm_list[i] > max)
            max = lcm_list[i];
    }
    printf("%d",max);

}

int gcd(int x, int y){
    if (y == 0)
        return x;
    else 
        return gcd(y, x % y);
}

int lcm(int x, int y){
    return (x*y)/gcd(x, y);
}