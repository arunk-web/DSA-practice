
// Problem Given a sentence, reverse each word individually 
// while keeping the word order intact. Example: "Hello World" 
// becomes "olleH dlroW"

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // important concept to break a string of sentense to string of words
    string sentense;
    getline(cin,sentense);

    string word;
    stringstream s(sentense);

    vector<string> vec;

    // string ans = "";

    while(s >> word){
        vec.push_back(word);
    }

    for(int i = 0 ; i < vec.size() ; i++){
        string &word = vec[i];

        int l = 0 , r = word.size()-1;
        while(l <= r){
            swap(word[l++],word[r--]);
        }

        // ans += word;
        // if(i != vec.size()-1){
        //     ans += " ";
        // }
    }

    string ans = "";
    for(int i = 0 ; i < vec.size() ; i++){
        ans += vec[i];
        if(i != vec.size()-1){
            ans += " ";
        }
    }

    cout<<ans<<endl;



    return 0;
}