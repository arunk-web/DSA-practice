#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }

    unordered_map<int,int> mpp;

    for(int i = 0 ; i < n ; i++){
        mpp[v[i]]++;
    }

    for(auto ch : mpp){
        int freq = ch.second;

        if(freq > n/2){
            cout<< ch.first;
        }
    }

    // cout<<first*second-1<<endl;


    return 0;
}