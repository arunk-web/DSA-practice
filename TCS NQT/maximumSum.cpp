// maximum subarray sum kadanes algo

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }

    int curr = 0;
    // int ans = 0;
    int maxi = INT_MIN;

    for(int i = 0 ; i < n ; i++){
        curr = max(v[i],curr + v[i]);

        maxi = max(maxi,curr);
        
    }

    cout<<maxi;
}