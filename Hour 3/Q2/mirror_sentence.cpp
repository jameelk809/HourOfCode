#include<iostream>
#include<vector>
using namespace std;

string mirror_sentence(string sentence){
    string rev_sentence = "";
    string word = "";
    for(auto x: sentence){
        if(x == ' '){
            rev_sentence = " " + word + rev_sentence;
            word = "";
        }
        else
            word += x;
    }
    rev_sentence = word + rev_sentence;
    return rev_sentence;
}

int main(){
    // string sentence = "Coding is awesome";
    string sentence = "is awesome";
    getline(cin, sentence);
    cout<<mirror_sentence(sentence);
    return 0;

}