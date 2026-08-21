// Problem Statement –

// Capgemini in its online written test have a coding question, wherein the students are given a string with multiple characters that are repeated consecutively. You’re supposed to reduce the size of this string using mathematical logic given as in the example below :

// Input :

// aabbbbeeeeffggg

// Output:

// a2b4e4f2g3

// Input :

// abbccccc

// Output:

// ab2c5

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    string ans;
    // vector<char> ch;
    map<char,int> mpp;

    for(auto c: str){
        mpp[c]++;
    }

    for(auto ch : mpp){
        char v = ch.first;
        int freq = ch.second;

        if(freq == 1){
            ans += v;
        }
        else {
            ans += v;
            ans += to_string(freq);
        }
    }

    cout<<ans<<" ";
    return 0;
}