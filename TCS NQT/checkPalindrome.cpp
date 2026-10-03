#include<bits/stdc++.h>
using namespace std;

bool check(string &s){
    int i = 0;
    int j = s.size()-1;

    while(i < j){
        if(tolower(s[i]) != tolower(s[j])){
            return false;
        }
        else{
            i++;
            j--;
            while(i < j && s[i] == "")i++;
            while(i < j && s[j] == "")j--;
        }
    }

    return true;
}
int main()
{
    string s;
    getline(cin,s);


    cout<<check(s);

    return 0;
}