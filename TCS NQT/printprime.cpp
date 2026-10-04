#include<bits/stdc++.h>
using namespace std;


bool isprime(int val){
    if(val <= 1) return false;

    for(int i = 2 ; i*i <= val ; i++){
        if(val%i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int n;
    cin>>n;

    vector<int> ans;

    for(int i = 2 ; i <= n ; i++){
        if(isprime(i)){
            ans.push_back(i);
        }
    }


    for(int i = 0 ; i < ans.size() ; i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}