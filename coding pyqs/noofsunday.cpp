// find number of sundaysss

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    int a;cin>>a;
    int ans = 0;

    unordered_map<string,int> mpp;

    mpp["monday"] = 6;
    mpp["tuesday"] = 5;
    mpp["wednesday"] = 4;
    mpp["thursday"] = 3;
    mpp["friday"] = 2;
    mpp["saturday"] = 1;
    mpp["sunday"] = 0;

    if(a-mpp[s] > 1){
        ans += 1 + (a-mpp[s])/7;
    }
   
    cout<<ans<<endl;
    return 0;
}