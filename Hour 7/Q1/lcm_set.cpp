#include<iostream>
using namespace std;

int gcd(int x, int y){
    if (y == 0)
        return x;
    else 
        return gcd(y, x % y);
}

int lcm(int x, int y){
    return (x*y)/gcd(x, y);
}

int main(){
    int i, max = -1, n;
    cin>>n;
    int arr[n], lcm_list[n-1];
    for(i = 0; i< n; i++)
        cin>>arr[i];
    for(i = 0; i < n-1; i++){
        lcm_list[i] = lcm(arr[i], arr[i+1]);
        if(lcm_list[i] > max)
            max = lcm_list[i];
    }
    cout<<max;
    return 0;
}