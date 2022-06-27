#include<iostream>
#include<vector>
using namespace std;

string base_number(string msg){
    string dec_msg = "";
    string word = "";
    vector<string> message;
    for(auto x: msg){
        if(x == ' '){
            message.push_back(word);
            word = "";
        }
        else
            word = word + x;
    }
    message.push_back(word);

    for(int i = 0; i < message.size(); i++){
        if(message[i] == "_")
            dec_msg += ' ';
        else if(message[i] == "#")
            dec_msg += message[i+1];
        else if(message[i-1] == "#" && i > 1);
        else if(isdigit(message[i][0])){
            if(message[i].length() > 1)
                dec_msg += 64 + (message[i][0]-'0')*10 + (message[i][1] - '0');
            else
                dec_msg += 64 + message[i][0] - '0';
        }
        else
            dec_msg += message[i];
    }
    return dec_msg;
}

int main(){
    string code;
    getline(cin, code);
    cout<<base_number(code);
    return 0;
}