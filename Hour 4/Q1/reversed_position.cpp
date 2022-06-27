#include<iostream>
using namespace std;

int main(){
    string data, rev_data;
    int i, n, count = 0;
    cin>>data;
    n = data.length();
    for(i=n-1; i>=0; i--)
        rev_data += data[i];
    for(i=0; i<n; i++){
        if(data[i] == rev_data[i])
            count++;
    }
    cout<<count;
    return 0;
}