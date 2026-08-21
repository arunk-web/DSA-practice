#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> v(n);
    map<int,int> mpp;

    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }

    for(auto num : v){
        mpp[num]++;
    }
    
    for(auto v : mpp){
        int val = v.first;
        int freq = v.second;

        cout<< val <<" "<<  "occurs"<<" " << freq<<" " << "times";

        cout<<endl;
    }

    return 0;
}