#include<iostream>
using namespace std;

bool isPalindrome(string s){
    int i, n = s.length();
    for(int i = 0; i < n; i++){
        if(s[i] != s[n-i-1])
            return false;
    }
    return true;
}

string convert_to_palindrome(string str){
    if(isPalindrome(str))
        return "0";
    int length = str.length(), res = 0, i, j = 0;
    string tempstr, result;
    while(length > 0){
        tempstr = "", result = "";
        for(i = j; i < str.length(); i++)
            tempstr += str[i];
        if(isPalindrome(tempstr)){
            res = j;
            break;
        }
        j++;
        length--;
    }
    for(i = res-1; i >= 0; i--)
        result += str[i];
    return result;
}

int main(){
    string str;
    cin>>str;
    cout<<convert_to_palindrome(str);
    return 0;
}
