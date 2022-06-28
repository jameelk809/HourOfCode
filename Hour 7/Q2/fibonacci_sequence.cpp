#include<iostream>
#include<math.h>
using namespace std;

bool is_Perfect_Square(int K);
bool is_Fibonacci(int R);

int main(){
    int n, i, count = 0;
    cin>>n;
    int arr[n];
    for(i = 0; i < n; i++)
        cin>>arr[i];
    for (int x : arr) {
        if(is_Fibonacci(x))
            count++;
    }
    cout<<count;
    return 0;
}

bool is_Perfect_Square(int K) {
        int s = (int)sqrt(K);
        return ((s*s == K) ? true: false);
    }

bool is_Fibonacci(int R){
    return(is_Perfect_Square(5*R*R + 4) || is_Perfect_Square(5*R*R - 4));
}
