#include<iostream>
using namespace std;

char FirstNonRepeat(string str){
    int i, freq[256] = {0};
    for(i = 0; i < str.length(); i++)
        freq[int(str[i])]++;
    for(i = 0; i < str.length(); i++){
        if(freq[int(str[i])] == 1)
            return str[i];
    }
    return '0';
}

int main(){
    string str = "nojon";
    cout<<FirstNonRepeat(str);
    return 0;
}