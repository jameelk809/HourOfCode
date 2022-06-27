#include<iostream>
using namespace std;

int main(){
    string queue_A = "00111101";
    string queue_B = "10000001";
    int len = queue_A.length(), i, count = 0;
    for(i = 0; i < len; i++){
        if(queue_A[i] != queue_B[i])
            count++;
    }
    cout<<(count*100/len);
}