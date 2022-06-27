#include<iostream>
using namespace std;

int CheckPassword(string password, int len){
    int num = 0, cap = 0, flag = 0, i;
    if (len >= 4){
        flag = 1;
        if(password[0] >= 48 && password[0] <= 57)
            flag = 0;
        for(i = 0; i < len; i++){
            if(password[i] >= 48 && password[i] <= 57)
                num++;
            if(password[i] >= 64 && password[i] <= 90)
                cap++;
            if(password[i] == ' ' || password[i] == '/')
                flag = 0;
        }
        if(num < 1 || cap < 1)
            flag = 0;
    }
    return flag;
}

int main(){
    string password;
    cin>>password;
    cout<<CheckPassword(password, password.length());
    return 0;
}