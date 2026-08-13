// Reverse a String Without Built-In Functions

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    int n = s.size();

    int l = 0 , r = n-1;

    while(l <= r){
        char c = s[l];
        s[l] = s[r];
        s[r] = c;
        l++;
        r--;
    }

    cout<<s<<endl;

}