#include<iostream>
using namespace std;

int main(){
    string batch;
    cin>>batch;
    int i, j, unique = 0, count;
    for(i = 0; i < batch.length(); i++)
        batch[i] = tolower(batch[i]);
    for(i = 0; i < batch.length(); i++){
        bool flag = true;
        count = 0;
        for(j = 0; j < batch.length(); j++){
            if(batch[i] == batch[j])
                count++;
            if(count > 1){
                flag = false;
                break;
            }
        }
        if(flag)
            unique++;
    }
    cout<<unique;
    return 0;
}