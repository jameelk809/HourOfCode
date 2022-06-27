#include<iostream>
using namespace std;

int main(){
    // string queue_A = "00111101";
    // string queue_B = "10000001";
    string queue_A, queue_B;
    cin>>queue_A;
    cin>>queue_B;
    int len = queue_A.length(), i, count = 0;
    for(i = 0; i < len; i++){
        if(queue_A[i] != queue_B[i])
            count++;
    }
    cout<<(count*100/len);
    return 0;
}