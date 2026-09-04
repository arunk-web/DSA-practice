#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin>>n;
    if (n == 0) {          // FIX 1: zero case handle kiya
        cout << 0 << endl;
        return 0;
    }
    
    string s="";

    while(n > 1){
        int rem = n%2;
        s += to_string(rem);
        n /= 2;
    }

    s += '1';

    reverse(s.begin(),s.end());

    cout<<s<<endl;
    return 0;
}