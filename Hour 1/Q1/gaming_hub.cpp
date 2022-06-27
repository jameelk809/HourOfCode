#include<iostream>
using namespace std;

int main(){
    int N, i, count = 0;
    cin>>N;
    int scores[N], health[2];
    for(i = 0; i < N; i++)
        cin>>scores[i];
    for(i = 0; i < 2; i++)
        cin>>health[i];
    for(i = 0; i < N; i++){
        if(health[0] % scores[i] == 0 && health[1] % scores[i] == 0)
            count++;
    }
    cout<<count;
    return 0;
}