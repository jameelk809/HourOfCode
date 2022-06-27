#include<iostream>
using namespace std;

int main(){
    int n, i,j=0;
    cin>>n;
    int arr[n];
    for(i = 1; i <= n; i++)
        arr[i] = i;
    while(n>1){
        j = 2*j+1;
        n/=2;
    }
    cout<<arr[j+1];
    return 0;
}