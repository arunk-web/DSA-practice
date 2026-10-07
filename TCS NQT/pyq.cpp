#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    

    vector<pair<int,int>> vec(n);
    map<int,int> mpp;


    for(int i = 0 ; i < n ; i++){
        cin>>vec[i].first>>vec[i].second;
        mpp[vec[i].second]++;
    }

    int check;cin>>check;
    int k;cin>>k;

    vector<int> ans;

    if(mpp[check] >= k){
        for(auto v :  vec){
            int value  = v.first;
            int freq =  v.second;

            if(freq == check){
                ans.push_back(value);
            }
        }

        cout<<ans[ans.size()-1];
    }
    else { 
        cout<<"-1"<<endl;
    }






}