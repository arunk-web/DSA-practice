#include<bits/stdc++.h>
using namespace std;

vector<string> find(string &s) {
    stringstream ss(s);
    vector<string> ch;
    string temp;

    while(ss >> temp){
        ch.push_back(temp);
    }
    
    for(int i = 0 ; i < ch.size() ; i++) {
        string curr = ch[i];

        curr[0] = toupper(curr[0]);
        curr[curr.size()-1] = toupper(curr[curr.size()-1]);
    }

    return ch;
}

int main(){
    string s;
    getline(cin,s);

    vector<string> ans = find(s);
    for(int i = 0 ; i < ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    
}